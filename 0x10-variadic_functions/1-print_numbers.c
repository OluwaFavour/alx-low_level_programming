#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
  * print_numbers - Print numbers followed by a new line
  *
  * @seperator: Delimiter to print numbers with
  * @n: Number of variadic parameters (Numbers to print)
  */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i != n - 1 && seperator != NULL)
			printf("%s", seperator);
	}
	va_end(args);
	printf("\n");
}
