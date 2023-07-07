#include "main.h"
/**
 * char *_strcpy - Function copies the string pointed to by src
 * @src: Pointer
 * @dest: Pointer
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i - 1; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
