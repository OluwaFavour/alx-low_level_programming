/* 2-print_alphabet.c */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, newLine;

	j = 122;
	newLine = 10;
	for (i = 97; i <= j; i++)
		putchar(i);
	putchar(newLine);

	return (0);
}
