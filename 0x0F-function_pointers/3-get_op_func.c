#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "3-calc.h"

/**
  * get_op_func - Gets the appropriate function for an operator input
  *
  * @s: Operator
  *
  * Return: Returns a pointer to the appropriate operator function
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*(ops[i]).op == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
