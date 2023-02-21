#include "main.h"

/**
  * times_table - Prints the 9 times table
  */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (b == 0)
			{
				_putchar('0');
			}
			else if (c < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + c);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + c / 10);
				_putchar('0' + c % 10);
			}
		}
		_putchar('\n');
	}
}
