#include "main.h"
#include <stdlib.h>

/**
  * rev_string - Reverses a string
  * @s: String to reverse
  */
void rev_string(char *s)
{
	char *reversed, *p = s;
	int i, j, len = 0;

	while (*p)
	{
		len++;
		p++;
	}

	reversed = malloc((len + 1) * sizeof(char));
	i = len - 1, j = 0;
	while (i >= 0)
	{
		reversed[j] = s[i];
		i--;
		j++;
	}
	while (*s++ = *reversed++)
		;
}
