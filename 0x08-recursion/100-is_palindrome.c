#include "main.h"

int is_palindrome_helper(char *s, int start, int end);
/**
  * is_palindrome - Checks if a string is a palindrome
  * @s: String to check
  *
  * Return: Returns 1 if string is a palindrome and 0 if not
  */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len == 0)
		return (1);

	return (is_palindrome_helper(s, 0, len - 1));
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

/**
 * is_palindrome_helper - Recursive helper function for is_palindrome
 * @s: String to check
 * @start: Starting index of the substring to check
 * @end: Ending index of the substring to check
 *
 * Return: Returns 1 if substring is a palindrome and 0 if not
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}
