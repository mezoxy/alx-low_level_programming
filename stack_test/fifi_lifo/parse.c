#include "monty.h"
#include <string.h>
#include <stdlib.h>

/**
*/

char **parse(char *str)
{
	char *token = NULL, **array = NULL, *line1 = NULL;
	int i = 0, array_size;

	line1 = strdup(str);/*add*/
	if (!line1)/*add*/
		return (NULL);
	array_size = count(line1);
	array = malloc(sizeof(char *) * (array_size + 1));
	if (!array)
	{ free(line1);
		free(str);
		return (NULL); }
	token = strtok(str, "\n");
	while (token)
	{
		array[i] = strdup(token);
		if (!array[i])
		{
			free(line1);/*change*/
			free_array(array);
			free(str);
			return (NULL); }

		token = strtok(NULL, "\n");
		i++; }
	array[i] = (NULL);
	free(line1);/* add*/
	free(str);
	return (array);
}

/**
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
 *  * count - A function that creturns the number of tokens
 *   * @line: The input
 *    * Return: An int
 *     */

int count(char *line)
{
	int i = 0;
	char *tok = NULL;

	tok = strtok(line, " \n\t");
	while (tok)
		i++, tok = strtok(NULL, " \n\t");
	return (i);
}
