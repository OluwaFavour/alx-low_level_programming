#include "main.h"
#include <stddef.h>

/**
  * _strpbrk - Locates the first occurence in the string s of any of the bytes
  * in the string accept
  * @s: String to search in
  * @accept: String to search for
  *
  * Return: Returns a pointer to the byte in s that matches one of the bytes
  * in accept, or NULL if no such byte is found
  */
char *_strpbrk(char *s, char *accept)
{
	char *res;
	unsigned char lookup[256] = {0};
	unsigned int i;

	i = 0;
	while (accept[i] != '\0')
	{
		lookup[(unsigned char)accept[i]] = 1;
		i++;
	}

	i = 0;
	res = NULL;
	while (s[i] != '\0')
	{
		if (lookup[(unsigned char)s[i]])
		{
			res = s + i;
			break;
		}
		i++;
	}

	return (res);
}
