#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * malloc_checked - A function that allocates mamory
 * @b: An integer
 * Return: A pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = (void *) malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
