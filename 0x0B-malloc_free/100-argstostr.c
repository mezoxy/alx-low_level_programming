#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - A function that concatenates al arguments of the probram
 * Return: A pointer to a new string
 * @ac: Number of arguments
 * @av: Vectors
 */
char *argstostr(int ac, char **av)
{
	int i, j, length_of_string = 0;
	char *ptr;

	if (ac == 0 || !av)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		length_of_string += strlen(av[i]) + 1;
	}
	ptr = (char *) malloc(sizeof(char) * (length_of_string + ac + 1));

	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < ac; i++)
	{
		strcpy(ptr + j, av[i]);
		j += strlen(av[i]);
		ptr[j++] = '\n';
	}
	ptr[length_of_string] = '\0';
	return (ptr);
}
