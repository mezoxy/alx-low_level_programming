#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * Return: A pointer to the allocated memory
 * @b: Integer
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (!ptr)
	{
		exit(98);
	}
	return (ptr);
}
