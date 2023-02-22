#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long i, fib1, fib, fib1_a, fib1_b, fib_a, fib_b;

	fib1 = 1, fib = 2;
	/* Printing the first 91 fibonacci numbers */
	printf("%lu", fib1);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", fib);
		fib = fib + fib1; /* nextFib = currentFib + prevFib */
		fib1 = fib - fib1; /* currentFib = nextFib - prevFib */
	}
	/**
	 * Splitting the numbers into two parts
	 * since the numbers are getting too large
	 */
	fib1_a = fib1 / 1000000000, fib1_b = fib1 % 1000000000;
	fib_a = fib / 1000000000, fib_b = fib % 1000000000;
	/* Printing the last 7 fibonacci numbers */
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", fib_a + (fib_b / 1000000000));
		printf("%lu", fib_b % 1000000000);
		fib_a = fib_a + fib1_a; /* nextFib = currentFib + prevFib */
		fib1_a = fib_a - fib1_a; /* currentFib = nextFib - prevFib */
		fib_b = fib_b + fib1_b; /* nextFib = currentFib + prevFib */
		fib1_b = fib_b - fib1_b; /* currentFib = nextFib - prevFib */
	}
	printf("\n"); /* new line */

	return (0);
}
