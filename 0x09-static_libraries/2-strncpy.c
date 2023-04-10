#include "main.h"
/**
 * char *_strncpy - A function that copies a string.
 * @dest: Destination
 * @src: source
 * @n: Number of characters to copy
 * Return: String
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
