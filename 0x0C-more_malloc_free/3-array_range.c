#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - A function that creates an array of integer
 * @min: An integer
 * @max: An integer
 * Return: A pointer
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));

	if (!ptr)
		return (NULL);
	for (i = 0; i <= max - min; i++)
	{
		*(ptr + i) = min + i;
	}
	return (ptr);
}
