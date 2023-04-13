#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - A function that concatenate two strings
 * Return: Pointer
 * @s1: String 1
 * @s2: string 2
 * @n: Number of character taken from s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	ptr = malloc(sizeof(char) * (strlen(s1) + n + 1));

	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[j + strlen(s1)] = s2[j];
	}
	ptr[strlen(s1) + n] = '\0';
	return (ptr);
}
