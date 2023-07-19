#include "function_pointers.h"
#include <string.h>
#include <stddef.h>

/**
 * print_name - A function that prints a name
 * @name: A string
 * @f: A function pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	ptr = f;

	(ptr)(name);
}
