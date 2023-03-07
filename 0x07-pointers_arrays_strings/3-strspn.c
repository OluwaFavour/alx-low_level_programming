#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  * @s: String to search in
  * @accept: String to search
  *
  * Return: Returns the length of the prefix substring
  */
int _strspn(char *s, char *accept)
{
	unsigned int a, b, i, j, res;

	a = b = i = j = 0;
	while (accept[i] != '\0')
	{
		a++;
		i++;
	}

	while (s[j] != '\0')
	{
		b++;
		j++;
	}
	i = j = res = 0;

	while (i <= a)
	{
		while (j <= b)
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
