#include "main.h"
/**
 * print_rev - Function that prints a string in reverse
 * @s : Pointer
 */
void print_rev(char *s)
{
	int num = 0;

	while (*s++)
	{
		num++;
	}
	while (num--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}

