#include "main.h"
/**
 * print_square - Function print a square
 * @size: Input
 */
void print_square(int size)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
