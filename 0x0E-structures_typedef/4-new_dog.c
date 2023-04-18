#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
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
	ptr->name = malloc(sizeof(name) + 1);
	ptr->owner = malloc(sizeof(owner) + 1);

	if (!ptr->name || !ptr->owner)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}
	strcpy(ptr->name, name);
	strcpy(ptr->owner, owner);
	ptr->age = age;
	return (ptr);
}
