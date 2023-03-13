#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * _strisdigit - Checks if a string contains digit only
  *
  * @s: String to check
  *
  * Return: Returns 1 if true and 0 if false
  */
int _strisdigit(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (isdigit(s[i]) == 0)
			return (0);
	}

	return (1);
}

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
			if (strcmp(argv[i], "0") != 0 &&
					_strisdigit(argv[i]) == 0)
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
