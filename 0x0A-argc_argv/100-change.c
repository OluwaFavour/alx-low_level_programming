#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the minimum number of coins
  * to make change for an amount of money
  *
  * @argc: Number of arguments passed to the program
  * @argv: Array of arguments passed to the program
  *
  * Return: Returns 0 (Success) and 1 (Fail)
  */
int main(int argc, char *argv[])
{
	int cents, counter;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		counter = 0;
		while (cents >= 0)
		{
			if ((cents - 25) >= 0)
			{
				cents -= 25;
			}
			else if ((cents - 10) >= 0)
			{
				cents -= 10;
			}
			else if ((cents - 5) >= 0)
			{
				cents -= 5;
			}
			else if ((cents - 2) >= 0)
			{
				cents -= 2;
			}
			else if ((cents - 1) >= 0)
			{
				cents--;
			}
			counter++;
		}
		printf("%d\n", counter);
	}

	return (0);
}
