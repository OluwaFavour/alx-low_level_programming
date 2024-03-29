#include "main.h"

/**
  * print_last_digit - Prints the last digit of an integer
  * @n: The integer to compute
  *
  * Return: Returns the last digit of the integer n
  */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n *= -1;
	_putchar(n + '0');

	return (n);
}
