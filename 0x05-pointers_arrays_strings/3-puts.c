#include "main.h"
/**
 * _puts - Prints a string
 * @str: String
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
	}
	_putchar('\n');
}
