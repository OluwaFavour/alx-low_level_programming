#include "main.h"

/**
  * get_bit - Gets the value of a bit at a given index
  *
  * @n: The number to get bit from
  * @index: The index of the number to get bit from
  *
  * Return: Returns the bit value (Success), or -1 (Fail)
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index; /* Unsigned long int version of 0 */

	if ((n & mask) > 0)
		return (1);
	else if ((n & mask) == 0)
		return (0);
	else
		return (-1);
}
