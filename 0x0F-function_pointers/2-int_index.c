#include "function_pointers.h"

/**
  * int_index - Searches for an integer
  *
  * @array: Array to look up
  * @size: Size of the array
  * @cmp: A pointer to the function to compare values
  *
  * Return: Returns the index of the first element
  * for which the cmp does not return 0 (Success)
  * And -1 (Fail)
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
