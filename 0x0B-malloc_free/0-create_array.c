#include "main.h"
#include <stdlib.h>

/**
  * create_array - Creates an array of characters
  * and initializes it with a specific character
  *
  * @size: Size of array
  * @c: Character to initialize array with
  *
  * Return: Returns a pointer to the array (Success), or NULL (Fail)
  */
char *create_array(unsigned int size, char c)
{
	char *res;
	unsigned int i;

	if (size < 1)
		return (NULL);
	res = malloc(size * sizeof(char));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		res[i] = c;

	return (res);
}
