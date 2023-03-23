#include "main.h"
/**
 * print_last_digit - Prints the last digit ofa number
 * @n: Input
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int r;

	if (n >= 0)
	{
		r = n % 10;
	}
	else
	{
		r = (-1) * (n % 10);
	}
	_putchar('0' + r);
	return (r);
}
