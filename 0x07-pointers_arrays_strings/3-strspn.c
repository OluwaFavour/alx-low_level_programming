#include "main.h"
#include <stddef.h>

/**
  * _strspn - gets the length of a prefix substring
  * @s: String to search in
  * @accept: String to search
  *
  * Return: Returns the length of the prefix substring
  */
int _strspn(char *s, char *accept)
{
	unsigned int i, j, res;

	i = j = res = 0;

	while (accept[i] != '\0')
	{
		while (s[j] != '\0')
		{
			if (accept[i] == s[j])
			{
				res++;
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}

	return (res);
}
