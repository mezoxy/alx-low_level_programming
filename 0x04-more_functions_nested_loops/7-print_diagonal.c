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
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= x; y++)
			{
				if (y != x)
				{
				_putchar(' ');
				}
				else
				{
					_putchar(92);
				}
			}
			_putchar('\n');
		}
	}
}
