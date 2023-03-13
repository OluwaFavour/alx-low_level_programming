#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Multiplies two numbers from standard input
  *
  * @argc: Number of arguments passed from standard input
  * @argv: Array of arguments passed from standard input
  *
  * Return: Always (0)
  */
int main(int argc, char *argv[])
{
	int res;

	if (argc > 1 && argc < 3)
	{
		res = atoi(argv[0]) * atoi(argv[1]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", res);

	return (0);
}
