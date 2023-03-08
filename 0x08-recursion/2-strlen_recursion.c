#include "main.h"

/**
  * _strlen_recursion - Return the length of a string using recursion
  * @s: String to get length of
  *
  * Return: Returns the length of the string
  */
int _strlen_recursion(char *s)
{
	if (*(s + 0) == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
