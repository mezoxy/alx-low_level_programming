#include "main.h"
/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: Pointer
 * @n: Number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	char e;

	for (i = 0; i < n / 2; i++)
	{
		e = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = e;
	}
}
