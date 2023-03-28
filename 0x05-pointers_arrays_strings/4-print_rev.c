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
	for (x = num - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}

