/* 0-putchar.c */
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char message[] = "_putchar";

	for (; i < 8; i++)
		_putchar(message[i]);
	_putchar('\n');

	return (0);
}
