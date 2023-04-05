#include "main.h"
/**
 * _print_rev_recursion - A function that prints a string in revers
 * @s: String to print in revers
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*s);
	s--;
}
