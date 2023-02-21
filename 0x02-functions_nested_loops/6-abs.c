#include "main.h"

/**
  * _abs - Computes the absolute value of an integer
  * @n: The integer to compute
  *
  * Return: Returns the absolute value of an integer
  */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
