#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: A fixe parameter
 * Return: Return the sum of integers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		int arg = va_arg(args, int);

		sum += arg;
	}
	va_end(args);
	return (sum);
}
