#include "main.h"
/**
 * jack_bauer - prints evry minute of the day
 */
void jack_bauer(void)
{
	int h, m;
	for (h ==0; h <= 23; h++)
	{
		for (m == 0;m <= 59; m++)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
		}
	}
}
