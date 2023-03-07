#include "main.h"

/**
  * _memcpy - Copies n bytes from memory area src to memory area dest
  * @dest: Memory area to copy to
  * @src: Memory area to copy from
  * @n: Number of bytes to copy from src
  *
  * Return: Return a pointer to the dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *res;
	unsigned int i;

	res = dest;
	i = 0;
	while (i < n)
	{
		*(res + i) = *(src + i);
		i++;
	}

	return (res);
}
