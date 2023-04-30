#include "main.h"
/**
 * Mozart - function that encodes a string into 1337.
 * Return: A string
 */
char *leet(char *s)
{
	int i, j;
	char s0[] = "aAeEoOtTlL";
	char s1[] = "443007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == s0[j])
				s[i] = s1[j];
		}
	}
	return (s);
}
