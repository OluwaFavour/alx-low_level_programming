/* 3-print_alphabets.c */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, newLine;

	i = 97;
	j = 123;
	newLine = 10;
	while (i < j)
	{
		putchar(i);
		if (i == 122)
		{
			i = 64;
			j = 91;
		}
		i++;
	}
	putchar(newLine);

	return (0);
}
