#include "main.h"

 /**
   * _puts - Prints a string followed by a new line to stdout
   * @str: String to print out
   */
void _puts(char *str)
{
	char *p = str;

	while (*p)
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
}
