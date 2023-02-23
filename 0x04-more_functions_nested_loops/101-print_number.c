#include "main.h"

/**
 * print_number - print an integer using putchar
 * @n: integer to print
 */
void print_number(int n)
{
	int cnt = 0, div = 1, digit;
	unsigned int abs_n = n;

	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		abs_n = (unsigned int)(-(n + 1)) + 1;
	}
	else
	{
		abs_n = (unsigned int)n;
	}

	/* Count the number of digits in the absolute value of n */
	while (abs_n / div >= 10)
	{
		div *= 10;
		cnt++;
	}
	cnt++;

	/* Print out each digit in n, */
	/* from most significant to least significant */
	while (cnt > 0)
	{
		digit = abs_n / div;
		_putchar(digit + '0');
		abs_n -= digit * div;
		div /= 10;
		cnt--;
	}
}
