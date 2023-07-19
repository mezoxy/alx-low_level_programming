#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: A pointer to an array
 * @size: Size of the array
 * @cmp: A function pointer to be used
 * Return: First element for which the cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	i = 0;

	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		else if (!cmp(array[i]) && i >= size)
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
