#include <stdio.h>

/**
  * main - prints the largest prime factor of 612852475143
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	long divisor, numerator;

	divisor = 2;
	numerator = 612852475143;
	while (numerator != 1)
	{
		if (numerator % divisor != 0)
			divisor++;
		else
			numerator /= divisor;
	}
	printf("%ld\n", divisor);

	return (0);
}
