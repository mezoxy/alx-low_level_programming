#include "main.h"
/**
 * _strcmp - Function that compares two strings
 * @s1: Pointer
 * @s2: Pointer
 * Return: 0 if they are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int k;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		k == (s1[i] - s2[i]) + 0;

		if (s1[i] != s2[i])
		{
			return (k);
			break;
		}
		i++;
	}
		else
		{
			return (0);
		}
}
