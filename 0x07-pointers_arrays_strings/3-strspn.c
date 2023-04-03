#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: String 1
 * @accept: String 2
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	for ( ; s[i] != '\0'; i++)
	{
		for ( ; accept[j] != '\0'; j++)
		{
			if (accept[j] != s[i])
			{
				return (i + 1);
			}
		}
	}
	return (0);
}
