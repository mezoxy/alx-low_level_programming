#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - A function that creates a new dog
 * @name: A string
 * @age: A float
 * @owner: A pointer
 * Return: A pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	if (!ptr)
		return (NULL);
	ptr->name = name;
	ptr->owner = owner;
	ptr->age = age;
	return (ptr);
}
