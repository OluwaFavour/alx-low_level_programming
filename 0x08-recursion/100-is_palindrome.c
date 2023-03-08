#include "main.h"

/**
  * is_palindrome - Checks if a string is a palindrome
  * @s: String to check
  *
  * Return: Returns 1 if string is a palindrome and 0 if not
  */
int is_palindrome(char *s)
{
	int i, j, len;

	len = _strlen_recursion(s);

	if (len == 0)
		return (1);
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
			return (0);
	}

	return (1);
}

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
