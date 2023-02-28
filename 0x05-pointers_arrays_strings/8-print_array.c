#include <stdio.h>

/**
  * print_array - Prints the elements of an array of integers
  * @a: Array to be printed
  * @n: Number of elements in the array
  */
void print_array(int *a, int n)
{
	int i;

	if (a == NULL || n < 1)
		return;
	printf("%d", a[0]);
	for (i = 1; i < n; i++)
		printf(", %d", a[i]);
	printf("\n");
}
