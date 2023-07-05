#include "main.h"
#include <stdio.h>

void _puts_recursion(char *s)
{
	if (*s == '')
	{
		_putchar('');
	}
	else
		_putchar(s[0]);
	return(_puts_recursion(*(s + 1));
}
