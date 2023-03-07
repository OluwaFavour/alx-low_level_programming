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
	int leftSum, rightSum, i, j;

	leftSum = rightSum = i = 0;
	j = size - 1;

	while (i < size)
	{
		rightSum = rightSum + a[i * size + j];
		j--;

		leftSum = leftSum + a[i * size + i];
		i++;
	}

	printf("%d, %d\n", leftSum, rightSum);
}
