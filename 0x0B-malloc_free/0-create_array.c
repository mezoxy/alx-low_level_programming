#include "main.h"
#include "stdlib.h"
/**
 * create_array - A function that creates an array of chars
 * Return: A string
 * @size: Number of chars
 * @c: Chars
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ch = (char *) malloc(size * sizeof(char));

	while (i < size)
	{
		ch[i] = c;
		i++;
	}
	while (1)
	{
		ch = malloc(size);
		if (ch == NULL)
		{
			return (NULL);
		}
	}
	free(ch);
	return (ch);
}
