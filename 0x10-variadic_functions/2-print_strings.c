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
	unsigned int i;
	char *pp;
	va_list pa;

	va_start(pa, n);

	for (i = 0; i < n; i++)
	{
		pp = va_arg(pa, char *);

		if (pa == NULL)
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s%s", pp, separator);
		}
		else if (i == n - 1)
		{
			printf("%s", pp);
		}
		else if (separator == NULL)
		{
			printf("%s", pp);
		}
	}
	printf("\n");
	va_end(pa);
}
