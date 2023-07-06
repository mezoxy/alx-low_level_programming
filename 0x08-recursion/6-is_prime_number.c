#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - A function
 * @n: An integer
 * Return: 1 or 0
 */
int Helper_function(int n, int x);

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	else
		return (Helper_function(n, 2));

}

/**
 * Helper_function - A helper function
 * @n: An integer
 * @x: An integer
 * Return: 1 or 0 if it's not
 */
int Helper_function(int n, int x)
{
	if (n > 1 && x >= n)
	{
		return (1);
	}
	else if (n % x == 0 || n <= 1)
	{
		return (0);
	}
	else
	return (Helper_function(n, x + 1));
}
