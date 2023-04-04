#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 * @s: String 1
 * @accept: String 2
 * Return: A pointer to the first occurrence in the string
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + 1);
			}
		}
	}
	return (NULL);
}
