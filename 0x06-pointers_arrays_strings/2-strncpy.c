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

	if (n <= 0)
	{
		dest[0] = '\0';
	}
	else
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
