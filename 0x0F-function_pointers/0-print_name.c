#include "function_pointers.h"

/**
  * print_name - Prints a name
  *
  * @name: Name to print
  * @f: Pointer to function that prints names
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
