/* 9-print_comb.c */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, newLine, comma, space;

	i = 48; /* ASCII for '0' */
	j = 57; /* ASCII for '9' */
	comma = 44; /* ASCII for ',' */
	space = 32; /* ASCII for ' ' */
	newLine = 10; /* ASCII for '\n' */
	for (; i <= j; i++)
	{
		putchar(i);
		if (i == 57)
		{
			putchar(newLine);
			continue;
		}
		putchar(comma);
		putchar(space);
	}

	return (0);
}
