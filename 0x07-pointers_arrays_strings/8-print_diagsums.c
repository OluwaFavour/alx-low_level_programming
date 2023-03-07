#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Prints
  * the sum of the two diagonals of a square matrix of integers
  * @a: A square matrix or 2D array of integers
  * @size: Size of the 2D array
  */
void print_diagsums(int *a, int size)
{
	unsigned int leftSum, rightSum;
	int i, j;

	leftSum = rightSum = i = 0;
	j = size - 1;

	while (i < size)
	{
		rightSum = rightSum + a[i][j];
		j--;

		leftSum = leftSum + a[i][i];
		i++;
	}

	printf("%u, %u\n", leftSum, rightSum);
}
