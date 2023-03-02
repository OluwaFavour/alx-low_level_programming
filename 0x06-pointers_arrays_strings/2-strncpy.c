#include "main.h"

/**
  * _strncpy - Copies at most n characters from src
  * @dest: String to copy to
  * @src: String to copy
  * @n: Numbers of characters to copy
  *
  * Return: Returns a pointer to resulting string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* copy at most n characters of src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/* pad dest with null bytes if n > length of src */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	/* return pointer to dest string */
	return (dest);
}
