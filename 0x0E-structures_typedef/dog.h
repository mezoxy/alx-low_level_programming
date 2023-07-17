#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure
 * @name: A string
 * @owner: A string
 * @age: A float
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
