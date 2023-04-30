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
	int j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
