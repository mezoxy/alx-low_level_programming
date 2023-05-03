#include "main.h"
#include <stdlib.h>
/**
 * _realloc - A function that reallocates a memory block
 * @ptr: Pointer for the previous memory
 * @old_size: Size of the previous memory
 * @new_size: Size of the new memory
 * Return: Void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr0, *ptr1;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	ptr0 = malloc(new_size);

	if (!ptr0)
	{
		return (NULL);
	}
	ptr1 = ptr;

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			ptr0[i] = ptr1[i];
		}
	}
	free(ptr);
	return (ptr0);
}
