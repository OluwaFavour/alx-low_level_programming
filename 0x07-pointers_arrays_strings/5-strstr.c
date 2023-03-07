#include "main.h"
#include <stddef.h>

/**
  * _strstr - Finds the first occurence of the substring needle in the haystack
  * @haystack: String to search in
  * @needle: String to search for
  *
  * Return: Returns a pointer to the first occurrence of the substring
  * or NULL if the substring is not found
  */
char *_strstr(char *haystack, char *needle)
{
	const char *h, *n;

	if (*needle == '\0')
	{
		return ((char *) haystack);
	}

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			h = haystack;
			n = needle;

			while (*h != '\0' && *n != '\0' && *h == *n)
			{
				++h;
				++n;
			}

			if (*n == '\0')
				return ((char *) haystack);
		}
		++haystack;
	}

	return (NULL);
}
