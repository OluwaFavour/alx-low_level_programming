#include "main.h"

/**
  * swap_int - Swaps the values of two intgers
  * @a: The first integer to be swapped
  * @b: The integer to swap @a with
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
