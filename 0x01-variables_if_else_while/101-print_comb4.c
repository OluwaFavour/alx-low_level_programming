/* 101-print_comb4.c */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, i;

	a = 48; /* ASCII DEC code for '0' */
	i = 57; /* ASCII DEC code for '9' */
	for (; a < i - 1; a++)
	{
		for (b = a + 1; b < i; b++)
		{
			for (c = b + 1; c <= i; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == 55 && b == 56 && c == 57)
				{
					continue;
				}
				putchar(44); /* Print comma */
				putchar(32); /* Print space */
			}
		}
	}
	putchar(10); /* Print new line */

	return (0);
}
