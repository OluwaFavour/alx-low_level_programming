#include "main.h"

/**
  * puts2 - prints every second character in a string
  * @str: String to print character from
  */
void puts2(char *str)
{
	/*char *p = str;*/
	int i = 0;

	while (1)
	{
		if (str[i] != '\0')
			_putchar(str[i]);

		if (str[i] == '\0' || str[i + 1] == '\0')
			break;
		i += 2;
	}
	_putchar('\n');
}
