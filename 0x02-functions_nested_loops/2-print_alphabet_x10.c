/* 2-print_alphabet_x10 */
#include "main.h"

/**
  * print_alphabet_x10 - Print the english alphabets in lowercase 10 times
  */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (; i < 10; i++)
	{
		c = 'a';
		for (; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
