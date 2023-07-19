#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - A finction
 * @array: A pointer to an array
 * @size: Size of the array
 * @action: a funtion pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
