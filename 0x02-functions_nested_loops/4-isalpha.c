#include "main.h"

/**
  * _isalpha: Checks if an ASCII character is a letter
  * @c: The character to be checked
  *
  * Return: Returns 1 (True) and 0 (False)
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
