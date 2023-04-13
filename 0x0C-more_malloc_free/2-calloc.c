#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - A function that allocates memory for an array
 * @nmemb: Number of blocks
 * @size: Size of each block
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return ((void *)ptr);
}
