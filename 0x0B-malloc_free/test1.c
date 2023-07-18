#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * create_array - A rg
 * @size: rfgrgrg
 * @c: Wfwf
 * Return: A ptr
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size);

	if (!ptr)
		return (NULL);
	i = 0;

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
