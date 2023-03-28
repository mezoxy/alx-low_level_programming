#include "main.h"
/**
 * print_rev - Function that prints a string in reverse
 * @s : Pointer
 */
void print_rev(char *s)
{
	int num = 0;
	int x;

	while (*s++)
	{
		num++;
	}
	x = num - 1;
	while (x <= 0)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}

