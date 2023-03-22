#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 */

void print_alphabet_x10(void)
{
	for (int x = 0 ; x <= 9 ; x++)
	{
		for (int y = 'a' ; y <= 'z' ; y++)
		{
			_putchar(y);
			_putchar('\n');
		}
	}
}
