#include <stdlib.h>
#include "main.h"

int _pow(int x, int y);

/**
  * _pow - Returns the value of x raised to the power of y
  * @x: Number to raise to power
  * @y: The exponent
  *
  * Return: Return the value of x raised to the power of y
  * or -1 if y is lower than 0
  */
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}

/**
  * binary_to_uint - Converts a binary number to an unsigned int
  *
  * @b: A pointer to a string of 0's and 1's
  *
  * Return: Returns the converted number (Success), or 0 (Fail)
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bit, count, i, result;

	if (*b == '\0' || b == NULL)
		return (0);
	i = count = result = 0;
	while (b[i] != '\0')
	{
		if (((b[i] - 48) == 0 || (b[i] - 48) == 1) != 1)
			return (0);
		count++;
		i++;
	}

	if (count > 0)
	{
		count--;
		i = 0;
		while (b[i] != '\0')
		{
			bit = b[i] - 48;
			result += bit * _pow(2, count);
			count--;
			i++;
		}
	}

	return (result);
}
