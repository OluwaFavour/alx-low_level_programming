#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
  * print_strings - Print strings followed by a new line
  *
  * @seperator: Delimiter
  * @n: Number of variadic parameters (strings to print)
  */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i = 0;

	va_start(args, n);
	for (; i < n; i++)
	{
		str = va_arg(args, char *);
		printf("%s", (str != NULL) ? str : "(nil)");

		if (i != n - 1 && seperator != NULL)
			printf("%s", seperator);
	}
	va_end(args);
	printf("\n");
}
