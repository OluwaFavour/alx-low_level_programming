/* 100-print_comb3.c */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, i, j, comma, space;

	a = 48; /* ASCII for '0' */
	i = j = 57; /* ASCII for '9' */
	comma = 44; /* ASCII for ',' */
	space = 32; /* ASCII for ' ' */
	for (; a < i; a++)
	{
		for (b = a + 1; b <= j; b++)
		{
			putchar(a);
			putchar(b);
			if (a < 56 || b < 57)
			{
				putchar(comma);
				putchar(space);
			}
		}
	}
	putchar(10); /* Print new line */

	return (0);
}
