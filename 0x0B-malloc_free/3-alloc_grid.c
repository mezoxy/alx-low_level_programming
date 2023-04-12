#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - A function that return a pointer
 * Return: A pointer
 * @width: Dimension 1 (nbr of rows)
 * @height: Dimensoin 2 (nbr of columns)
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **) malloc(sizeof(int *) * height);

	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(sizeof(int) * width);

		if (!ptr[i])
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
