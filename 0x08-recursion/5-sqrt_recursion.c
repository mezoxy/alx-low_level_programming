#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - A function that returns the square root of a number n
 * @n: An integer
 * Return: Square root
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (n < 0 || i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
	return (_sqrt_recursion_helper(n, i + 1));
	}
}

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 0));
}
