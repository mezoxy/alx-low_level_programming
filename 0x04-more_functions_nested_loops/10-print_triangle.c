#include "main.h"
/**
 * print_triangle - That prints a triangle
 * @size: input
 */
void print_triangle(int size)
{
	int x;
	int y;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = x; y <= size; y++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= x; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
