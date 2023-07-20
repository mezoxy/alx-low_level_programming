#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
 * print_strings - A function that prints a string
 * @separator: A string to be printed between the strings
 * @n: Num of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list y;

	va_start(y, n);
	i = 0;

	while (i < n)
	{
		str = va_arg(y, char *);
		if (separator == NULL || i == n - 1)
			separator = "";
		if (str == NULL)
			printf("(nil)");
		printf("%s%s", str, separator);
		i++;
	}
	printf("\n");
}
