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

	for (k = 0; s[k] != '\0'; k++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[k] ==  accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
