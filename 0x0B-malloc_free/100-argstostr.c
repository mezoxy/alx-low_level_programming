#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - A function thatcancatenates all the arguments
 * @ac: How many arg
 * @av: A pointer
 * Return: A pointer
 */
char *argstostr(int ac, char **av)
{
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	char **ptr = malloc(sizeof(char *) * ac);

	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		ptr[i] = av[i];
	}
	return (*ptr);
}
