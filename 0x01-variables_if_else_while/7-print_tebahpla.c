/* 7-print_tebahpla.c */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, newLine;

	i = 97; /* ASCII for 'a' */
	j = 122; /* ASCII for 'z' */
	newLine = 10; /* ASCII for '\n' */
	for (; j >= i; j--)
		putchar(j);
	putchar(newLine);

	return (0);
}
