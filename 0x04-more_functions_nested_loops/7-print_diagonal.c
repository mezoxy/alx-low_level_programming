#include "main.h"
/**
 * print_diagonal - Draws a diagonal line
 * @n: Input
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n == 1)
	{
		_putchar('\\');
		_putchar('\n');
	}
	else
	{
		for (x = 2; x <= n; x++)
		{
			for (y = 1; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
