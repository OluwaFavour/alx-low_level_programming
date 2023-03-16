#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - Allocates memory using malloc
  *
  * @b: Number of bytes to allocate
  *
  * Return: Returns a pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *res;

	res = malloc(b);
	if (res == NULL)
		exit(98);
	return (res);
}
