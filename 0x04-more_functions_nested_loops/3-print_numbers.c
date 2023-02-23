#include "main.h"

/**
  * print_numbers - Prints the numbers from 0-9
  */
void print_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
