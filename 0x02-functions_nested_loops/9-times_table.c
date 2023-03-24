#include "main.h"
/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int i;
	int j;
	int k = i * j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (k > 9)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{
				_putchar(k  + '0');
			}
		}
		_putchar('\n');
	}
}
