#include "main.h"
#include <stdio.h>

/**
  * main - Prints all arguments passed to the program
  *
  * @argc: Number of arguments passed to the program
  * @argv: Array of arguments passed to the program
  *
  * Return: Always (0)
  */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	else
	{
		printf("%s\n", *argv);
	}

	return (0);
}
