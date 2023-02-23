#include "main.h"

/**
  * _isupper - Checks if a character is uppercase
  * @c: The character to check
  *
  * Return: Returns 1 (True)
  * returns 0 (False)
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
