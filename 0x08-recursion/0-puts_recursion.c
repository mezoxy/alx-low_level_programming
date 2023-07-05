#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - A function
 * @s: A string
 */

void _puts_recursion(char *s)
{
	if (*s == '')
	{
		_putchar('');
	}
	else
		_putchar(s[0]);
	return (_puts_recursion(*(s + 1)));
}
