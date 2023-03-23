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
	struct format_printer lookup[5];
	struct format_printer *fp;
	va_list args;
	int count;

	lookup[0].format = 'c';
	lookup[0].print = print_char;
	lookup[1].format = 'i';
	lookup[1].print = print_int;
	lookup[2].format = 'f';
	lookup[2].print = print_float;
	lookup[3].format = 's';
	lookup[3].print = print_string;
	lookup[4].format = '\0';
	lookup[4].print = NULL;

	va_start(args, format);
	count = 0;
	while (format && format[count])
	{
		fp = lookup;
		while (fp->format != '\0')
		{
			if (fp->format == format[count])
			{
				fp->print(args);
				if (format[count + 1] != '\0')
					printf(", ");
				break;
			}
			fp++;
		}
		count++;
	}

	va_end(args);
	printf("\n");
}
