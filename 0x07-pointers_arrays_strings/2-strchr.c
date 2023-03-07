#include "main.h"
#include <stddef.h>

/**
  * _strchr - Locates a character in a string
  * @s: String to search
  * @c: Character to locate
  *
  * Return: Returns a pointer to the first occurence of c or NULL if not found
  */
char *_strchr(char *s, char c)
{
	char *res;
	unsigned int i, j, len;

	i = 0, len = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	j = 0;
	res = NULL;
	while (j <= len)
	{
		if (s[j] == c)
		{
			res = s + j;
			break;
		}
		j++;
	}

	return (res);
}
