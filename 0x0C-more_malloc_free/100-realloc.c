#include "main.h"
#include <stdlib.h>

/**
  * _realloc - Reallocates a memory block
  *
  * @ptr: Previously allocated memory block
  * @old_size: Old size of memory block
  * @new_size: New size of memory block
  *
  * Return: Returns a pointer to the newly allocated memory block (Success)
  * or NULL (Fail);
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *res;
	char *p, *q;
	unsigned int i;

	if (ptr == NULL)
	{
		res = malloc(new_size);
		if (res == NULL)
			return (NULL);
		return (res);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	res = malloc(new_size);
	if (res == NULL)
		return (NULL);
	p = ptr;
	q = res;
	for (i = 0; i < old_size && i < new_size; i++)
		q[i] = p[i];
	free(ptr);

	return (res);
}
