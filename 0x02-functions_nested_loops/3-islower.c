#include "main.h"

/**
  * _islower - Checks if an ASCII character is lowercase
  * @c: The character to be checked
  *
  * Return: Returns 1 if true and 0 if false
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
