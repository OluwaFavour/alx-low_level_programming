#include "main.h"

/**
  * set_string - Sets the value of a pointer to a char
  * @s: Pointer to change
  * @to: String to change to;
  */
void set_string(char **s, char *to)
{
	*s = to;
}
