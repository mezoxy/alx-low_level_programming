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
	unsigned long int m = 1, new;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if (index == 0)
	{
		new = *n + 1;
		*n = new;
		return (*n);
	}
	while (index)
	{
		m = m * 2;
		index--;
	}
	new = *n + m;
	*n = new;
	return (*n);
}
