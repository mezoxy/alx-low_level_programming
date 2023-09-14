#include "shell.h"
/**
 * parse - A function that split the input
 * @str: The input
 * Return: An array of strings
 */

char **parse(char *str)
{
	char *token = NULL, **array = NULL, *line1 = NULL;
	int i = 0, array_size;

	line1 = _strdup(str);
	array_size = count(line1);
	free(line1);
	array = malloc(sizeof(char *) * (array_size + 1));
	if (!array)
	{ free(str);
		return (NULL); }
	token = strtok(str, " \n\t");
	while (token)
	{
		array[i] = _strdup(token);
		if (!array[i])
		{
			free(str);
			free_array(array);
			return (NULL); }

		token = strtok(NULL, " \n\t");
		i++; }
	array[i] = (NULL);
	return (array);
}
/**
 * free_array - A function that frees an array of pointers
 * @tokens: An array of pointers
*/

void free_array(char **tokens)
{
	int h;

	if (!tokens)
		return;
	for (h = 0; tokens[h]; h++)
		free(tokens[h]);
	free(tokens);
}

/**
 * _strlen - My strlen
 * @str: A string
 * Return: Lenght of the string
*/
size_t _strlen(const char *str)
{
	const char *s = str;

	while (*s)
		s++;
	return (s - str);
}

/**
 * _memcpy - My memcpy
 * @dest: Destination
 * @src: Source
 * @n: The size
 * Return: A pointer
*/
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d = dest;
	const unsigned char *s = src;

	while (n--)
		*d++ = *s++;
	return (dest);
}
/**
 * _strdup - My strdup
 * @str: String
 * Return: A string
*/

char *_strdup(const char *str)
{
	size_t len;
	char *new_str = NULL;

	if (!str)
		return (NULL);
	len = _strlen(str) + 1;
	new_str = malloc(len);
	if (new_str)
		_memcpy(new_str, str, len);
	return (new_str);
}
