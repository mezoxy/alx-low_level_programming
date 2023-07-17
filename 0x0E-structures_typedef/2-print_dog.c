#include "dog.h"
#include <stdio.h>
#include <string.h>
/**
 * print_dog - A function that prints a struct dog
 * @d: A pointer to a struct
 * Return: Void
 *
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	if (!(d->name))
		printf("Name: (nil)\n");
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
