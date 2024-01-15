#include "search_algos.h"

/**
 * linear_search - A function that searches for a value using LINEAR SEARCH
 * @array: The array to search in
 * @value: The value to search for
 * @size: The size f the array
 * Return: The index of the value otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);

	while (i < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value  == array[i])
			return (i);
		i++;
	}
	return (-1);
}
