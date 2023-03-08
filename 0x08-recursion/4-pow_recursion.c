#include "main.h"

/**
  * _pow_recursion - Returns the value of x raised to the power of y
  * @x: Number to raise to power
  * @y: The exponent
  *
  * Return: Return the value of x raised to the power of y
  * or -1 if y is lower than 0
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
