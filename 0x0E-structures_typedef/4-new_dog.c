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
	char *name1, *owner1;
	name1 = name;
	owner1 = owner;

	ptr = malloc(sizeof(dog_t));

	if (!ptr)
		return (NULL);
	if (!name1 || !owner1)
	{
		free(ptr);
		return (NULL);
	}
	ptr->name = name1;
	ptr->owner = owner1;
	ptr->age = age;
	return (ptr);
}
