#include "main.h"
#include <stdio.h>

/**
  * main - Prints the number of arguments passed to the program

  * @argc: Number of arguments passed to the program
  * @argv: Array of arguments passed to the program
  *
  * Return: Always (0)
  */
int main(int argc, char __attribute__((unused))*argv[])
{
	if (argc < 1)
		printf("0");
	else
		printf("%d\n", argc - 1);

	return (0);
}
