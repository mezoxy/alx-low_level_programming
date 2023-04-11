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
	unsigned int i;
	char *ch = (char *) malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (ch);
}
