#include "main.h"
#include <stdlib.h>
/**
 * array_range - A function that creates an array of integers
 * @min: First integer
 * @max: Last integer
 * Return: The pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, j = min;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max - min + 1) * sizeof(int));

	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		ptr[i] = j;
		j++;
	}
	return (ptr);
}
