#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - A function that initialize a struct
 * @d: A pointer
 * @name: A pointer
 * @owner: A pointer
 * @age: The age
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
