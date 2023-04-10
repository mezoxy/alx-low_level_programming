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
			int k = j * i;

			if (j != 9)
			{
				else
				 _putchar(k + '0');
				 _putchar(',');
				 _putchar(' ');
			}
			else
			{
				if (k <= 9 && )
			}
		}
		_putchar('\n');
	}
}
