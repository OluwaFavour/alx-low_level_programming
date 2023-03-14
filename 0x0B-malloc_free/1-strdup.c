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
  * _strdup - returns a pointer to a newly allocated space in memory
  * which contains a copy of the string given as a parameter
  *
  * @str: String to copy
  *
  * Return: Returns a pointer to the new memory (Success), and NULL (Fail)
  */
char *_strdup(char *str)
{
	char *res;
	int i, len;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	res = malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);

	i = 0;
	while (i <= len)
	{
		res[i] = str[i];
		i++;
	}

	return (res);
}
