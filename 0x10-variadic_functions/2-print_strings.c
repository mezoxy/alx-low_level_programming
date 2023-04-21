#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - A function that prints strings
 * @separator: A pointer
 * @n: Number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	char *pp;

	va_start(pa, n);

	for (i = 0; i < n; i++)
	{
		pp = va_arg(pa, char *);

		if (pa == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", pp);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(pa);
}
