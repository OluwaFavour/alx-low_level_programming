#include "main.h"

/**
  * more_numbers - Print the numbers 0-14 ten times
  */
void more_numbers(void)
{
	int i, j;
	char c;

	i = j = 0;
	while (j < 10)
	{
		for (; i < 16; i++)
		{
			if (i >= 10 && i != 15)
			{
				_putchar('0' + (i / 10));
				_putchar('0' + (i % 10));
			}
			else
			{
				if (i == 15)
					c = '\n';
				else
					c = '0' + i;
				_putchar(c);
			}
		}
		i = 0;
		j++;
	}
}
