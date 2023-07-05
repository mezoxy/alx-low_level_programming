#include "main.h"
#include <stdio.h>
/**
 * factorial - A function that returns the factorial of a number
 * @n: A number
 * Return: The factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (factorial(n - 1) * n);
}
