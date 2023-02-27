#include "main.h"

/**
  * print_rev - Prints a string in reverse followed by a new line
  * @s: The string to print
  */
void print_rev(char *s)
{
	if (*s)
	{
		print_rev(s + 1);
		_putchar(*s);
	}
	else
	{
		return;
	}
	if (*(s - 1) == '\0')
		_putchar('\n');
}
