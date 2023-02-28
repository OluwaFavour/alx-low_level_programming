#include "main.h"

/**
  * puts2 - prints every second character in a string
  * @str: String to print character from
  */
void puts2(char *str)
{
	char *p = str;

	while (*p != '\0' && *(p + 1) != '\0')
	{
		_putchar(*p);
		p += 2;
	}
	_putchar('\n');
}
