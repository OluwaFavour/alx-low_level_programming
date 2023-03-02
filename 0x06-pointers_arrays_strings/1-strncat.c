#include "main.h"

/**
  * _strncat - Concatenates two strings using at most n bytes from src
  * @dest: String to append to
  * @src: String to append from
  * @n: Number of bytes
  *
  * Return: Returns a pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/* find the end of dest string */
	while (dest[i] != '\0')
		i++;
	/* append src to dest, up to n characters */
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	/* add terminating null byte to dest */
	dest[i] = '\0';
	/* return pointer to dest string */
	return (dest);
}
