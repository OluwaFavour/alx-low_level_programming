#include "main.h"
#include <stdlib.h>

/**
  * _calloc - Allocates memory for an array with memory set to Zero
  *
  * @nmemb: Number of elements in array
  * @size: Size of array
  *
  * Return: Returns a pointer to the allocated memory (Success)
  * or NULL (Fail)
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	res = malloc(nmemb * size);
	if (res == NULL)
		return (NULL);
	i = 0;
	p = res;
	while (i < (nmemb * size))
	{
		p[i] = 0;
		i++;
	}

	return (res);
}
