#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
  * print_all - Prints anything with a specified format
  *
  * @format: Types of arguments passed to the function
  * c -> char
  * i -> integer
  * f -> float
  * s -> char *
  */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	int i = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			printf("%s", (s != NULL ? s : "(nil)"));
		}
		i++;
		if (format[i] != '\0' && (
					format[i] == 'c' ||
					format[i] == 'i' ||
					format[i] == 'f' ||
					format[i] == 's'
					))
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
