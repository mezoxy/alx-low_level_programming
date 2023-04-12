#include "main.h"
#include <stdlib.h>
/**
 * str_concat - A function that concatenates two stings
 * Return: a pointer
 * @s1: String 1
 * @s2: String 2
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	unsigned int i = 0;
	unsigned int j = 0;
	char *concat_str;

	if (!s1 && !s2)
	{
		return (NULL);
	}
	while (s1 && s1[size1] != '\0')
	{
		size1++;
	}
	while (s2 && s1[size2] != '\0')
	{
		size2++;
	}
	concat_str = malloc((size1 + size2 + 1) * sizeof(char));

	if (!concat_str)
	{
		return (NULL);
	}
	for (i = 0; i < size1 + size2; i++)
	{
		if (i < size1)
		{
			concat_str[i] = s1[i];
		}
		else
		{
			concat_str[i] = s2[j];
			j++;
		}
	}
	concat_str[size1 + size2] = '\0';
	return (concat_str);
}
