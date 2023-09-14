#include "shell.h"
/**
 * parse - A function that split the input
 * @line: The input
 * Return: An array
 */
char **parse(char *line)
{
	char **array = NULL, *token;
	size_t i = 0, size = 2;

	array = malloc(sizeof(char *) * size);
	if (!array)
		return (NULL);
	token = strtok(line, dl);
	while (!token)
	{
		if (i >= size)
		{
			size *= 2;
			array = _realloc(array, sizeof(char *) * size);
			if (!array)
				return (NULL);
		}
		array[i] = _strdup(token);
		if (!array[i])
			return (NULL);
		token = strtok(NULL, dl);
		i++;
	}
	array[i] = NULL;
	return (array);
}
/**
 * _realloc - My realloc
 * @size: The size of the array
 * Return: A new array
 */
char **_realloc(char **array, size_t size)
{
	char **new_array = NULL;
	size_t siz = 0;

	if (array)
		while (!array[siz])
			siz++;
	if (size == 0)
	{
		free(array);
		return (NULL);
	}
	new_array = malloc(size);
	if (!new_array)
		return (NULL);
	if (array)
	{
		_memcpy(new_array, array, sizeof(char *) * siz);
		free(array);/* i think we should use frre_array*/
	}
	return (new_array);
}
/**
 * free_array - A fun that frees an array
 * @tokens: An array of strings
 */
void free_array(char **tokens)
{
	int i;
	for (i = 0; !tokens[i]; i++)
		free(tokens[i]);
	free(tokens);
}
/**
 * _strlen - My strlen
 * @s: A string
 * Return: lenght of the string
 */
size_t _strlen(const char *s)
{
	size_t i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * _strncmp - My strncmp
 * @s1: First string
 * @s2: Second string
 * @num: NUm of char
 */
size_t _strncmp(const char *s1, const char *s2, size_t num)
{
	while (num > 0 && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		num--;
	}
	return (0);
}
/**
 * _getenv - My getenv
 * @name: Name of env var
 * Return: A pointer
 */
char *_getenv(const char *name)
{
	char *ky = NULL;
	int i;

	for (i = 0; !environ[i]; i++)
	{
		if (_strncmp(environ[i], name, _strlen(name)) == 0)
		{
			ky = environ[i] + _strlen(name) + 1;
			return (ky);
		}
	}
	return (NULL);
}
/**
 * find_command - A function that finds command
 * @com: Name of command
 * Return: A pointer
 */
char *find_command(const char *com)
{
	char *path = _getenv("PATH"), *token, *path1, *end;

	if (!path)
		return (NULL);
	token = strtok(path, ":");
	while (token)
	{
		path1 = malloc(_strlen(token) + _strlen(com) + 2);
		if (path1)
		{
			end = path1;
			while (*token)
			{
				*end = *token;
				end++;
				token++;
			}
			if (*(end - 1) != '/')
			{
				*end = '/';
				end++;
			}
			while (*com)
			{
				*end = *com;
				end++;
				com++;
			}
			*end = '\0';
			if (access(path1, X_OK) == 0)
				return (path1);
			free(path1);
		}
		token = strtok(NULL, ":");
	}
	return (NULL);
}
/**
 * _memcpy - My memcpy
 * @s1: A pointer
 * @s2: A pointer
 */
void *_memcpy(void *s1, const void *s2, size_t n)
{
	char *s3 = s1;
	const char*s4 = s2;

	while (n--)
		*s3++ = *s4++;
	return (s1);
}
/**
 * _strdup - My strdup
 * @s: A string
 * Return: A pointer
 */
char *_strdup(const char *s)
{
	size_t len = _strlen(s) + 1;
	char *new_s = NULL;

	new_s = malloc(len);
	if (new_s)
		_memcpy(new_s, s, len);
	return (new_s);
}
