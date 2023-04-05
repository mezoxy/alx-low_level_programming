#include "main.h"
/**
 * factorial - A function that returns the factorial of a given number
 * @n: Input
 * Return: -1 if n less than 0 else return factorial
 */
int factorial(int n)
{
	if (n <= 0)
	{
		if (n == 0)
		{
		return (1);
		}
		return (-1);
	}
	return (n * factorial(n - 1));
}
