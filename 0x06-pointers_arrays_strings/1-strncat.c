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
	char ch[n - 1];

	while (src[i] != '\0')
	{
		i++;
	}
	if (i <= n)
	{
		dest = _strcat(dest, src);
	}
	else
	{
		while (j <= n - 1)
		{
			ch[j] = src[j];
			j++;
		}
		dest = _strcat(dest, src);
	}
	return (dest);
}
