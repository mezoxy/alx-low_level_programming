#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 *
 * @n: Input
 * Return: n if +, -n if -
 */

int _abs(int n)
{
	int m = (-1) * n;

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (m);
	}
}
