#ifndef DOH_H
#define DOH_H
/**
 * struct dog - A struct that containes nultiple members
 * @name: Name of dog
 * @age: Age of dog
 * @owner: The owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
