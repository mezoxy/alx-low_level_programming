#include "search_algos.h"

/**
 * binary_search - A function find an index of a value using the binary search
 * @array: The array to search in
 * @size: The size of the array
 * @value: The int to search for it
 * Return: The index of the value otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	int r = 0, l = (int)(size - 1), m = (r + l) / 2, i;

	while (r < l)
	{
		printf("Searching in array: ");
		for (i = r; i <= l; i++)
		{
			printf("%d", array[i]);
			if (i < l)
				printf(", ");
		}
		printf("\n");
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			l = m - 1;
		if (array[m] < value)
			r = m + 1;
		m = (r + l) / 2;
	}
	if (r == l)
	{
		printf("Searching in array: %d\n", array[r]);
		if (array[r] == value)
			return (r);
	}
	return (-1);
}
