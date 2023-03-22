#include "function_pointers.h"
#include <stddef.h>

/**
  * array_iterator - Executes a function given
  * as a parameter on each element of an array
  *
  * @array: Array to work on
  * @size: Size of the array
  * @action: Pointer to the function to execute
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (; i < size; i++)
		action(array[i]);
}
