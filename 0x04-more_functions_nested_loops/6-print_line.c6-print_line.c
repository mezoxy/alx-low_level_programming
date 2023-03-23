#includec "main.h"
/**
 * print_line - Draws a straight line
 * @n: Input
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

