#include "main.h"
#include <stdlib.h>

/**
  * array_range - Creates an array of integers that contains
  * all values from min (included) to max (included)
  *
  * @min: Starting number
  * @max: Last number
  *
  * Return: Returns a pointer to the new array (Success), or NULL (Fail)
  */
int *array_range(int min, int max)
{
	int *res, i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	res = malloc(len * sizeof(int));
	if (res == NULL)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
		res[i] = min;
	return (res);
}
