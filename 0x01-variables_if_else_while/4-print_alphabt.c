/* 4-print_alphabt */
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
	j = 122;
	newLine = 10;
	for (; i <= j; i++)
	{
		if (i == 101 || i == 113)
			continue;
		putchar(i);
	}
	putchar(newLine);

	return (0);
}
