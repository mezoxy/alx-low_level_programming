#include "main.h"
/**
 * _memcpy - A function that copies memory area
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
