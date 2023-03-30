#include "main.h"
/**
 * char *_strncat - Function that concatenates two strings
 * _strcat - Function appends the src string to the dest
 * @dest: Pointer
 * @src: Pointer
 * @n: Integer n
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k;

	while (src[i] != '\0')
	{
		i++;
	}
	while (dest[j] != '\0')
	{
		j++;
	}
	if (i <= n)
	{
		for (k = j; k <= i + j - 1; k++)
		{
			dest[k] = src[k - j];
		}
	}
	else if (n < i && n >= 0)
	{
		for (k = j; k <= n + j - 1; k++)
		{
			dest[j] = src[k - j];
		}
	}
	else
	{
		return (dest);
	}
	return (dest);
}
