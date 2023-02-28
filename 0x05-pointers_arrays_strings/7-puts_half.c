#include "main.h"

/**
  * puts_half - Prints half of a string
  * @str: String to print
  */
void puts_half(char *str)
{
	char *p = str;
	int start, len = 0;

	while (*p)
	{
		len++;
		p++;
	}

	start = (len % 2 == 0) ? (len / 2) : ((len - 1) / 2) + 1;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
