#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 */

void print_name(char *name, void (*f)(char *))
{
	int i;

	i = 0;
	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar(' ');
	f(name);
	_putchar('\n');
}
