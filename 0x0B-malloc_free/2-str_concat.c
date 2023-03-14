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
  * str_concat - Concatenates two string
  *
  * @s1: First string
  * @s2: Second string
  *
  * Return: Returns a pointer to the concatenated string memory space (Success)
  * and NULL (Fail)
  */
char *str_concat(char *s1, char *s2)
{
	int i, len, len1, len2;
	char *res;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = _strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = _strlen(s2);
	len = len1 + len2 + 1; /* Add 1 for null terminator */
	res = malloc(len * sizeof(char));
	if (res == NULL)
		return (NULL);

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
		while (*s2 != '\0')
		{
			res[i] = *s2;
			i++;
			s2++;
		}
	}
	res[i] = '\0';
	return (res);
}
