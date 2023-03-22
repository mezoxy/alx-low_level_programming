#include "main.h"

/**
 * _islower - Function tht checks for lowercase character
 *
 * Return: 1 if the charcter is lowercase, 0 if it's not
 *
 * @c: Parameter
 */

int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
