#include "main.h"
/**
 * swap_int - This function can swaps the values of two integers
 * @a: Input 1
 * @b: Input 2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
