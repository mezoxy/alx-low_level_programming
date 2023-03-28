#include "main.h"
/**
 * print_rev - Function that prints a string in reverse
 * @s : Pointer
 */
void print_rev(char *s)
{
	int num = 0;
	int i;

	while (*s++)
	{
		num++;
	}
	for (i = num; i >= 0; i--)
	{
		_putchar(s[i]);

	}
	_putchar('\n');
}

