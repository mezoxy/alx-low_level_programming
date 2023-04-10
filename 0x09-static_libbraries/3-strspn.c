#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: String 1
 * @accept: String 2
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j;
	unsigned int k;
	unsigned int i = 0;

	for (k = 0; accept[k] != '\0'; k++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[j] == s[k])
			{
				i++;
			}
			else
			{
				return (i);
			}
		}
	}
	return (i);
}
