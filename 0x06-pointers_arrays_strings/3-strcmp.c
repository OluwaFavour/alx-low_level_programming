#include "main.h"

/**
  * _strcmp - Compares two string
  * @s1: The first string
  * @s2: The second string
  *
  * Return:
  * 0 if s1 and s2 are equal
  * A negative integer if s1 is less than s2
  * A positive integer if s1 is greater than s2
  */
int _strcmp(char *s1, char *s2)
{
	unsigned int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			break;
		i++;
	}

	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] < s2[i])
		return (-1);
	else
		return (1);
}
