#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - A function that creat a new dog
 * Return: A pointer to dog_t
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of the owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	if (!ptr)
	{
		return (NULL);
	}
	ptr->name = name;
	ptr->owner = owner;
	ptr->age = age;
	return (ptr);
}
