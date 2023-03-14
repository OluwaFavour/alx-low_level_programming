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
	int i, j, len, len1, len2;
	char *res;

	if (s1 == NULL)
		len1 = 1; /* Treat s1 as an empty string */
	else
		len1 = _strlen(s1) + 1; /* Added 1 because of NULL term */

	if (s2 == NULL)
		len2 = 1; /* Treat s2 as an empty string */
	else
		len2 = _strlen(s2) + 1; /* Added 1 because of NULL term */
	len = len1 + len2 - 1; /* Remove 1 NULL term */
	res = malloc(len * sizeof(char)); /* Allocate memory to res */
	if (res == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0' && j <= len)
	{
		res[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0' && j <= len)
	{
		res[j] = s2[i];
		i++;
		j++;
	}

	return (res);
}
