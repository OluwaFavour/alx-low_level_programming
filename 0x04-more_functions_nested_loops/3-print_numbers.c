#include "main.h"

/**
  * print_numbers - Prints the numbers from 0-9
  */
void print_numbers(void)
{
	int i;

	while (i < 10)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
