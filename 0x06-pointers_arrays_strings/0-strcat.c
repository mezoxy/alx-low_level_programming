#include "main.h"
/**
 * char *_strcat - Function that concatenates two strings
 * @dest: Pointer
 * @src: Pointer
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k;

	while (src[i] != '\0')
	{
		i++;
	}
	while (dest[i] != '\0')
	{
		j++;
	}
	for (k = j; k <= i + j - 2; k++)
	{
		dest[k] = src[k - j];
	}
	dest[i + j - 1] = '\0';
	dest[i + j] = '\0';
	return (dest);
}
