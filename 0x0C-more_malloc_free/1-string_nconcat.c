#include "main.h"
#include <stdlib.h>

/**
  * _strlen - Returns the length of a string
  * @s: The string to compute
  *
  * Return: Returns the length of the string
  */
int _strlen(char *s)
{
	char *p = s;

	while (*p)
		p++;
	return ((int)(p - s));
}

/**
  * string_nconcat - Concatenates two string
  *
  * @s1: First string
  * @s2: Second string
  * @n: Number of bytes to be copied from s2
  *
  * Return: Returns a pointer to the new string (Success)
  * or NULL (Fail)
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, len;
	char *res;

	len = 0;
	if (s1 != NULL)
		len += _strlen(s1);
	if (s2 != NULL)
	{
		if (n >= (unsigned int)_strlen(s2))
			len += _strlen(s2);
		else
			len += n;
	}
	res = malloc(len * sizeof(char) + 1);
	i = 0;
	if (s1 != NULL)
	{
		while (*s1 != '\0')
		{
			res[i] = *s1;
			i++;
			s1++;
		}
	}
	if (s2 != NULL)
	{
		while (i < len)
		{
			res[i] = *s2;
			i++;
			s2++;
		}
	}
	res[i] = '\0';

	return (res);
}
