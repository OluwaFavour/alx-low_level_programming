#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the opcodes of the programs main function
  *
  * @ac: Argument count
  * @av: Argument vector
  *
  * Return: Always 0 (Success)
  */
int main(int ac, char **av)
{
	int number_of_bytes, i;
	unsigned char *ptr;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(av[1]);
	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (unsigned char *)&main;
	for (i = 0; i < number_of_bytes; i++)
	{
		if (i == (number_of_bytes - 1))
			printf("%02x", ptr[i]);
		else
			printf("%02x ", ptr[i]);
	}
	printf("\n");

	return (0);
}
