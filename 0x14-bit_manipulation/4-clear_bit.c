#include <stdio.h>
#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index.
 * @n: A pointer
 * @index: A position
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
