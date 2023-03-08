#include "main.h"

/**
  * factorial - Calculates the factorial of input number
  * @n: Input number
  *
  * Return: Returns the factorial of input number
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
