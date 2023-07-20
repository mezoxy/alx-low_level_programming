#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
 * sum_them_all - A function that calculates sum
 * @n: Number of arguments
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x, sum = 0;
	va_list y;

	va_start(y, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(y, int);
		sum += x;
	}
	va_end(y);
	return (sum);
}
