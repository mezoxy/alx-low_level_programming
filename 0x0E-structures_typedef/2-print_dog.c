#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - A function that print a struct dog
 * @d: A pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->owner == NULL || d->age == NULL)
	{
		printf("(NIL)");
	}
	else if (d->name == NULL)
	{
		printf("Name: (NIL)");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
