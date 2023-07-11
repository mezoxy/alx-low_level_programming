#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * str_concat - A function that concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);

	ptr = strcat(s1, s2);
	return (ptr);
}
