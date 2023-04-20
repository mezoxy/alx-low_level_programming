#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - A function that executes a function given as a parameter
 * @array: A pointer to an array
 * @size: Size of the array
 * @action: Function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
