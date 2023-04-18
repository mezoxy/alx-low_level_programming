#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - A function that frees dogs
 * @d: A pointer
 */
void free_dog(dog_t *d)
{
	free(d->name);
	if (d)
	{
		if (d->name)
		{
			 free(d->name);
		}
		if (d->owner)
		{
			free(d->owner);
		}
		free(d);
	}
}
