#include "search_algos.h"
#include <math.h>

/**
 * jump_search - A function that searches for a value using Jump search
 * @array: The array to search in
 * @size: The size of the array
 * @value: The value to search for
 * Return: The index of the value, ohterwise -1
 */


int jump_search(int *array, size_t size, int value)
{
	int i, j, jump = (int)sqrt(size), tmp = 0, det = 0;

	if (!array)
		return (-1);

	for (i = 0; i < (int)size; i += jump)
	{
		tmp = i + jump;
		if (value != array[i] && det != 1)
			printf("Value checked array[%d] = [%d]\n", array[i], i);
		if (value > array[tmp] && tmp < (int)size)
		{
			det = 1;
			printf("Value checked array[%d] = [%d]\n", array[tmp], tmp);
		}
		if (value <= array[tmp])
		{
			printf("Value found between indexes [%d] and [%d]\n", i, tmp);
			for (j = i; j <= tmp; j++)
			{
				printf("Value checked array[%d] = [%d]\n", j, array[j]);
				if (value == array[j])
					return (j);
				if (j == tmp && value != array[j])
					return (-1);
			}
		}
	}
	printf("Value found between indexes [%d] and [%d]\n", i - jump, tmp);
	for (j = i - jump; j < (int)size; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (value == array[j])
			return (j);
	}
	return (-1);
}
