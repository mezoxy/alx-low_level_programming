#include "dog.h"
#include <string.h>
#include <stdio.h>
/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: A pointer to a struct
 * @name: A string
 * @owner: A string
 * @age: A float
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->owner = owner;
	d->name = name;
	d->age = age;
}
