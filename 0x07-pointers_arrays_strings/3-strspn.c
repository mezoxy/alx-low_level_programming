#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: String 1
 * @accept: String 2
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	unsigned int k = 0;

	for ( ; s[k] != '\0'; k++)
	{
		for ( ; accept[j] != '\0'; j++)
		{
			if (accept[j] != s[k])
			{
				k++;
			}
		}
	}
	return (k);
}
