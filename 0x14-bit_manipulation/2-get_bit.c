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
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
