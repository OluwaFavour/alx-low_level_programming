#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Adds positive numbers from standard input
  *
  * @argc: Number of arguments from standard input
  * @argv: Array of arguments from standard input
  *
  * Return: Always (0)
  */
int main(int argc, char *argv[])
{
	int i, res;

	if (argc > 1)
	{
		res = 0;
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			res += atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
