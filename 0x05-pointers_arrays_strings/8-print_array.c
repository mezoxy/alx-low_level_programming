#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array
 * @a: Element
 * @n: Number of elements
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}
