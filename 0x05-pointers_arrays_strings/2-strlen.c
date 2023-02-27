#include "main.h"
#include <stdio.h>
/**
  * _strlen - Returns the length of a string
  * @s: The string to compute
  *
  * Return: Returns the length of the string
  */
int _strlen(char *s)
{
	int count;

	while (s[count] != '\0')
	{
		count++;
	}
	printf("Test: %c\n", s[0]);
	return (count);
}
