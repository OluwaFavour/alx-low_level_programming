#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * main - Performs simple mathematical binary operations
  *
  * @ac: Argument count
  * @av: Argument vector
  *
  * Return: Always 0 (Success)
  */
int main(int ac, char **av)
{
	int num1, num2, (*operator)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	operator = get_op_func(av[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operator(num1, num2));

	return (0);
}
