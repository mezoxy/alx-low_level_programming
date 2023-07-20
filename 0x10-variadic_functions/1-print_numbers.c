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
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		x = va_arg(y, int);

		printf("%d", x);
		printf("%s", separator);
		if (i == n - 1)
			printf("%d", x);
	}
	printf("\n");
}
