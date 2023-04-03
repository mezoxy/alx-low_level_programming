#include "main.h"
#include <stddef.h>
/**
 * _strchr - a function that locates a character in string
 * @s: String
 * @c: Character to copy
 * Return: The first position of c if is it not found return NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s = s + i
		}
		s = NULL;
		i++;
	}
	return (s);
}

