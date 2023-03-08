#include "main.h"

int calc_sqrt(int n, int start);
/**
  * _sqrt_recursion - Returns the natural square root of a number
  * @n: Number to compute
  *
  * Return: Return the natural square root of a number
  * or -1 for numbers without square root
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (calc_sqrt(n, 1));
}

/**
  * calc_sqrt - Calculates the square root
  * @n: Number to calculate
  * @start: Starting point
  *
  * Return: Returns the square root
  */
int calc_sqrt(int n, int start)
{
	if (n == start * start)
		return (start);
	if (start >= (n / 2))
		return (-1);
	return (calc_sqrt(n, start + 1));
}
