#include "main.h"

/**
 * _islower - Function tht checks for lowercase character
 *
 * Return: 1 if the charcter is lowercase, 0 if it's not
 *
 * @c: input of function
 */

int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
