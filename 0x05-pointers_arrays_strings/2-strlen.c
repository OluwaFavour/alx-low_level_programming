#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: The string to compute
  *
  * Return: Returns the length of the string
  */
int _strlen(char *s)
{
	int count;

	while (count >= 0)
	{
		if (*(s + count) == '\0')
			return (count);
		count++;
	}
}
