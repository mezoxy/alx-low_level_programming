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

/**
 * flip_bits - A function
 * @n: Num 1
 * @m: Num 2
 * Return: Num of bits you would need to flip to get from one num to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, j = 0;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if (get_bit(n, i) == get_bit(m, i))
			continue;
		j++;
	}
	return (j);
}
