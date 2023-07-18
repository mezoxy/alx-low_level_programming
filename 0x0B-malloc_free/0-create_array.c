#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A function that create an array of chars
 * @size: Size
 * @c: A char
 * Return: A pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size);

	if (!ptr)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
