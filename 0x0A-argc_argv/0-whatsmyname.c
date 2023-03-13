#include "main.h"
#include <stdio.h>

/**
  * main - Prints the name of the program
  *
  * @argc: Number of arguments to program
  * @argv: Array of arguments to program
  *
  * Return: Always (0)
  */
int main(int argc, char *argv[])
{
	(void)(argc); /* unused variable */

	printf("%s\n", *argv);

	return (0);
}
