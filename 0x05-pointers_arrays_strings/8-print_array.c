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

	while (a[i] != '\0')
	{
		printf("%d, ", a[i]);
		i++;
	}
	_putchar('\n');
}
