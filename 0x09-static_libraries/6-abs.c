#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @n: Input
 * Return: n if +, m if -
 */
int _abs(int n)
{
	int m = (-1) * n;

	if (n < 0)
	{
		return (m);
	}
	else
	{
		return (n);
	}
}
