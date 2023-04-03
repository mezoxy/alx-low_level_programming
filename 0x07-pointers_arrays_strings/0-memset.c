#include "main.h"
/**
 * _memset - Function that fills memory with a constant byte.
 * @s: Destination
 * @n: Number of bytes
 * @b: Character that will be replaced
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
