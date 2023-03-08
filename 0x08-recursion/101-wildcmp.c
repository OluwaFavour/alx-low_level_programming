#include "main.h"

int wildcmp_helper(char *s1, char *s2, int match);
/**
 * wildcmp_helper - Helper function for recursive implementation of wildcmp
 *
 * @s1: The first string to compare
 * @s2: second string to compare, which may contain a '*' wildcard character
 * @match: A flag indicating whether the strings matched so far
 *
 * Return: 1 if the strings are considered equal, 0 otherwise
 */
int wildcmp_helper(char *s1, char *s2, int match)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (match);

	if (*s1 == *s2)
		return (wildcmp_helper(s1 + 1, s2 + 1, match));

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp_helper(s1, s2 + 1, match));

		if (wildcmp_helper(s1 + 1, s2, match) ||
				wildcmp_helper(s1, s2 + 1, match))
			return (1);
	}

	return (0);
}

/**
 * wildcmp - Compares two strings for equality
 * allowing for a wildcard character
 *
 * @s1: The first string to compare
 * @s2: second string to compare, which may contain a '*' wildcard character
 *
 * Return: 1 if the strings are considered equal, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2, 1));
}
