#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 98, i;
	long fib1 = 1, fib2 = 2, fib;

	printf("%ld, %ld", fib1, fib2);
	for (i = 3; i <= n; i++)
	{
		fib = fib1 + fib2;
		printf(", %ld", fib);
		fib1 = fib2;
		fib2 = fib;
	}
	printf("\n");

	return (0);
}
