#include "main.h"

/**
  * puts2 - prints every second character in a string
  * @str: String to print character from
  */
void puts2(char *str)
{
	char *p = str;

	while (1)
	{
		_putchar(*p);
		if (*(p + 1) != '\0')
			p += 2;
		else
			break;
	}
	_putchar('\n');
}
