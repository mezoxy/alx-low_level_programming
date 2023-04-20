#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - A function that searches for an integer.
 * @size: Size of the array
 * @cmp: Function pointers
 * Return: The index of the first element
 * @array: An array of integers
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	return (-1);
}
