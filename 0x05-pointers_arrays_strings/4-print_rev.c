#include "main.h"
#include <stddef.h>

/**
  * print_rev - Prints a string in reverse followed by a new line
  * @s: The string to print
  */
void print_rev(char *s)
{
	char *p = s;
	int i, len = 0;

	while (*p)
	{
		len++;
		p++;
	}

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
