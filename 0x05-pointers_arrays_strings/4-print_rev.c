#include "main.h"
/**
 * print_rev - Function that prints a string in reverse
 * @s : Pointer
 */
void print_rev(char *s)
{
	int num = 0;
	int i;

	while (s[num] != '\0')
	{
		num++;
	}
	for (i = num - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

