#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
/**
 * print_numbers - A function that prints numbers
 * @separator: a string to be printed
 * @n: Number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list y;

	va_start(y, n);
	i = 0;

	while (i < n)
	{
		x = va_arg(y, int);
		printf("%d", x);
		printf("%s", (separator != NULL) ? separator : "");
		i++;
	}
	printf("\n");
}
