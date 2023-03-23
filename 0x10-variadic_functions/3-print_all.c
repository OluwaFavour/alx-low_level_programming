#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @args: va_list of arguments
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: va_list of arguments
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: va_list of arguments
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: va_list of arguments
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);
	printf("%s", (s == NULL) ? "(nil)" : s);
}

/**
  * print_all - Prints anything with a specified format
  *
  * @format: Types of arguments passed to the function
  * c -> char
  * i -> integer
  * f -> float
  * s -> char *
  */
void print_all(const char *const format, ...)
{
	va_list args;
	va_start(args, format);

	struct format_printer lookup[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL} // sentinel value
	};

	int count = 0;
	while (format && format[count])
	{
		struct format_printer *fp = lookup;
		while (fp->format != '\0')
		{
			if (fp->format == format[count])
			{
				fp->print(args);
				break;
			}
			fp++;
		}
		count++;
	}

	va_end(args);
	printf("\n");
}
