#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A  that prints the sum of the two diagonals
 * @a: The matrix
 * @size: The size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum = a[i] + sum;
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum, sum1);
}
