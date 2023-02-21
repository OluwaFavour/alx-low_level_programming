#include "main.h"

/**
 * print_alphabet - Prints all the letters of the alphabet in lower case
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	for (; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
