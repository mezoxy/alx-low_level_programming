#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - A function that prints numbers
 * @separator: A string
 * @n: Number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int arg = va_arg(args, int);

		if (separator != NULL && i < n -1)
		{
			printf("%d%c", arg, *separator);
		}
		else
		{
			printf("%d", arg);
		}
	}
	printf("\n");
	va_end(args);
}
