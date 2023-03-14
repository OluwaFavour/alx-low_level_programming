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
  * argstostr - Concatenates all the arguments passed to the main program
  *
  * @ac: Argument count
  * @av: Argument vector
  *
  * Return: A pointer to a new string (Success), or NULL (Fail)
  */
char *argstostr(int ac, char **av)
{
	char *res;
	int i, j, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]) + 1; /* Add 1 for new line */
	len++; /* Add 1 for null terminator */
	res = malloc(len * sizeof(char));
	j = 0;
	for (i = 0; i < ac; i++)
	{
		while (*av[i] != '\0')
		{
			res[j] = *av[i];
			j++;
			av[i]++;
		}
		res[j] = '\n';
		j++;
	}
	res[j] = '\0';
	return (res);
}
