/* 8-print_base16.c */
#include <stdio.h>

/**
 * main - Print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, newLine;

	i = 48; /* ASCII for '0' */
	j = 57; /* ASCII for '9' */
	newLine = 10; /* ASCII for '\n' */

	while (i <= j)
	{
		putchar(i);
		if (i == 57)
		{
			i = 96; /* ASCII for '`' */
			j = 102; /* ASCII for 'f' */
		}
		i++;
	}
	putchar(newLine);

	return (0);
}
