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
	unsigned char lookup[256] = {0};
	unsigned int i, res;

	i = res = 0;

	while (accept[i] != '\0')
	{
		lookup[(unsigned char)accept[i]] = 1;
		i++;
	}

	i = 0;
	while (s[i] != '\0' && (lookup[(unsigned char)s[i]]))
	{
		res++;
		i++;
	}

	return (res);
}
