#include "main.h"

int calc_sqrt(int n, int start, int end);
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
	return (calc_sqrt(n, 1, n));
}

/**
  * calc_sqrt - Calculates the square root
  * @n: Number to calculate
  * @start: Starting point
  * @end: Ending point
  *
  * Return: Returns the square root
  */
int calc_sqrt(int n, int start, int end)
{
	int mid, sq, res;

	if (start > end)
		return (-1);

	mid = start + (end - start) / 2;
	sq = mid * mid;
	if (sq == n)
	{
		return (mid);
	}
	else if (sq > n)
	{
		return (calc_sqrt(n, start, mid - 1));
	}
	else
	{
		res = calc_sqrt(n, mid + 1, end);
		return ((res == -1) ? -1 : res);
	}
}
