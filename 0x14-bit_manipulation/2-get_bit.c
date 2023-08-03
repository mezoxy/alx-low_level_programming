#include <stdio.h>
#include "main.h"

/**
 * get_bit - A function that determine the value of a bit at a given position
 * @n: Number
 * @index: Position
 * Return: 1 or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index == 0)
		return (n & 1);
	while (index)
	{
		n = n >> 1;
		index--;
		if (index > 0 && n >> 1 == 0)
			return (-1);
	}
	return (n & 1);
}
