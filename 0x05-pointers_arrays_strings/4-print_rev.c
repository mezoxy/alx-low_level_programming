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
	x = num;
	while (x--)
	{
		_putchar(s[x] + '0');
	}
	_putchar('\n');
}

