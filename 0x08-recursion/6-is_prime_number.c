#include "main.h"

int prime_check(int n, int div);
/**
  * is_prime_number - Checks if input number is a prime number
  * @n: Input number
  *
  * Return: Returns 1 if n is a prime number and 0 otherwise
  */
int is_prime_number(int n)
{
	int div;

	div = 2;

	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	return (prime_check(n, div));
}

/**
  * prime_check - Checks if number is divisible
  * @n: Input number
  * @div: divisor
  *
  * Return: Returns 1 if prime and 0 otherwise
  */
int prime_check(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div == n / 2)
		return (1);

	return (prime_check(n, div + 1));
}
