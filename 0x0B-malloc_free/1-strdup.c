#include "main.h"
#include "stdlib.h"
/**
 * _strdup - Returns a pointer
 * Return: A pointer
 * @str : String
 */
char *_strdup(char *str)
{
	unsigned int size = 0;
	unsigned int i = 0;
	char *str1;

	if (!str)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	str1 = malloc((size + 1) * sizeof(char));

	if (!str1)
	{
		return (NULL);
	}
	while (i < size)
	{
		str1[i] = str[i];
		i++;
	}
	str1[size] = '\0';
	return (str1);
}
