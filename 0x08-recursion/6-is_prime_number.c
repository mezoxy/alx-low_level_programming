#include "main.h"
/**
 * is_prime_number - a function that determine if n is prime or not
 * @n: Input
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if ((n % 2 == 0 && n != 2) || n <= 1)
	{
		return (0);
	}
	return (Remainder(n, n - 1));
}
/**
 * Remainder - A function that determine the remainder of x divided by y
 * @x: Input 1
 * @y: Input 2
 * Return: 1 if it not divisble of any number less than y else 0
 */

int Remainder(int x, int y)
{
	if (x % y == 0)
	{
		return (0);
	}
	else if (y > 2 && x % y != 0)
	{
		return (Remainder(x, y - 1));
	}
	else
	return (1);
}
