#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - A function
 * @width: First dimensin
 * @height: Second
 * Return: A pointer
 */

int **alloc_grid(int width, int height)
{
	int **ptr = malloc(sizeof(int *) * height);
	int i, j;

	if (width <= 0 || height <= 0 || !ptr)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (!ptr[i])
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			ptr[i][j] = 0;
		}

	}
	return (ptr);
}
