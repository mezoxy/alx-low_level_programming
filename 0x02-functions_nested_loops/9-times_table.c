#include "main.h"
/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j > 9)
			{
				_putchar(j * i / 10 + '0');
				_putchar(j * i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(j * i  + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
