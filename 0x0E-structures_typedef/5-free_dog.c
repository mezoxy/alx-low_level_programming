#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * free_dog - A function that frees dogs
 * @d: A pointer
 * Return: Void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
	return;
}
