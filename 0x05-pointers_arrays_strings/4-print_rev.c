#include "main.h"
/**
 * print_rev - Function that prints a string in reverse
 * @s : Pointer
 */
void print_rev(char *s)
{
	int x;

	while (x != 0)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}

