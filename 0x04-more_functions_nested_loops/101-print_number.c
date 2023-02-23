#include "main.h"

/**
 * print_number - print an integer using putchar
 * @n: integer to print
 */
void print_number(int n)
{
	int cnt = 0, div = 1, digit, abs_n = n;

	/* Handle negative numbers */
	if (n < 0)
	{
		abs_n = -n;
		_putchar('-');
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
