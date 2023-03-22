#include "main."

/**
 * print_sign - Printing the sign of a number
 *
 * Return: 1 if n greter than 0, 0 if n == 0, -1 if n less than zero
 * @n: Input
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
