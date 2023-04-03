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

	for ( ; s[i] != '\0' || s[i] == '\0'; i++)
	{
		if (s[i] == c && s[i] != '\0')
		{
			return (s + i);
		}
		else
		{
			return (s + i);
		}
	}
	return ('\0');
}

