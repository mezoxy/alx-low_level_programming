#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - A function that cancatenates 2 strings
 * @s1: first string
 * @s2: Second string
 * @n: An integer
 * Return: A pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	if (!s1 && !s2)
		return (NULL);
	ptr = malloc(strlen(s1) + n + 1);

	if (!ptr)
		return (NULL);
	if (n > strlen(s2))
	{
		strcpy(ptr, s1);
		strcat(ptr, s2);
	}
	else
	{
		strcpy(ptr, s1);
		strncat(ptr, s2, n);
	}
	return (ptr);
}
