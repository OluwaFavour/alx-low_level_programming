#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n;
	long fib1 = 0, fib2 = 1, fib;

	n = 0;
	while (fib <= 4000000)
	{
		fib = fib1 + fib2;
		if (fib % 2 == 0)
			n += fib;
		fib1 = fib2;
		fib2 = fib;
	}
	printf("%lu\n", n);

	return (0);
}
