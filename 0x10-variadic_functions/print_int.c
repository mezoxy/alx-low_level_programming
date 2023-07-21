#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_int - A function that prints an integer
 * @ptr: A pointer
 */
void print_int(const char *ptr, ...)
{
	int i = 1;
	va_list y;
	va_start(y, ptr);

	i = va_arg(y, int);
	printf("%d", i);
}
