#include "main.h"

/**
  * print_most_numbers - Prints numbers from 0-9 excluding 2 and 4
  */
void print_most_numbers(void)
{
	int i;

	for (; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar('0' + i);
	}
	_putchar('\n');
}
