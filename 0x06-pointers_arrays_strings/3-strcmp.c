#include "main.h"
/**
 * _strcmp - Function that compares two strings
 * @s1: String 1
 * @s2: String 2
 * Return: 0 if they are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int k;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{

		if (s1[i] != s2[i])
		{
			k = s1[i] - s2[i];
			break;
		}
	}
	for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		k = s1[i] - s2[i];
	}
	return (k);
}
