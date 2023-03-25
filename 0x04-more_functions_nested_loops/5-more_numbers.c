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
		for (y = 0; y <= 14; y++)
		{
			_putchar(y > 9 ?  (y / 10) + '0' : y + '0');
			if (y > 9)
			{
				_putchar((y % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
