#include <stdio.h>
#include "dog.h"
/**
 * free_dog - A function that frees dogs
 * @d: A pointer
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
