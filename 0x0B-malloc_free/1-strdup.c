#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - A function return a ptr to a newly allocated space
 * @str: A string
 *
 * Return: A pointer
 */

char *_strdup(char *str)
{
	unsigned int i;

	char *ptr = malloc(sizeof(char) * strlen(str));

	if (!ptr || str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < strlen(str); i++)
		{
			*(ptr + i) = str[i];
		}
	}
	return (ptr);
	free(ptr);
}
