#include "main.h"
/**
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int sum = 0;
	int div;

	for (i = 0; i < size; i++)
	{
		sum = a[i] + sum;
	}
	div = sum;

	while (!(sum >= 0 && sum <= 9))
	{
		div = div / 10;
		j++;
	}
	for (i = j; i >= 0; i--)
	{
		_putchar()
	}
}
