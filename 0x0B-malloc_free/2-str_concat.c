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
	int i, j, len;
	char *res;
	
	len = 0;
	if (s1 != NULL)
		len += _strlen(s1);
	if (s2 != NULL)
		len += _strlen(s2) + 1;
	len++;
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
