#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - A function that prints a name
 * @name: A pointer
 * @f: A function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
