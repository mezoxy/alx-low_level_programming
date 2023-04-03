#include "main.h"
/**
 * _memset - Function that fills memory with a constant bytes
 * @s: Destination
 * @n: Number of bytes
 * @b: Character that will be replaced
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
