#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int x;
	int y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 1; y <= 14; y++)
		{
			if (y <= 9)
			{
				_putchar((y % 10) + '0');
			}
			else
			{
				_putchar((y / 10) + '0');
			}
		}
	}
	_putchar('\n');
}
