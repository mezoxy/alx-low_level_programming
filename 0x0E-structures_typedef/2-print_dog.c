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
	{
		return;
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	else if (!(d->name))
	{
		d->name = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
