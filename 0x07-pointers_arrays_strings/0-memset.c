#include "main.h"

/**
  * _memset - Fills the first n bytes of the memory area pointed to by s
  * with the constant byte b
  * @s: Memory area
  * @b: Byte to fill in
  * @n: Byte to fill
  *
  * Return: Returns a pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *res;

	res = s;
	i = 0;
	while (i < n)
	{
		*(res + i) = b;
		i++;
	}

	return (res);
}
