/* 6-print_numberz.c */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, newLine;

	i = 48; /* ASCII for 0 */
	j = 57; /* ASCII for 9 */
	newLine = 10; /* ASCII for new line */
	for (; i <= j; i++)
		putchar(i);
	putchar(newLine);

	return (0);
}
