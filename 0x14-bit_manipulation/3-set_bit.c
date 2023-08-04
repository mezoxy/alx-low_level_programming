#include <stdio.h>
#include "main.h"

/**
 * set_bit - A function
 * @n: A pointer
 * @index: A position
 * Return: Number
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (-1);
}
