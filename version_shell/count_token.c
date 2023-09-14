#include "shell.h"
/**
 * count - A function that creturns the number of tokens
 * @line: The input
 * Return: An int
 */

int count(char *line)
{
	int i = 0;
	char *tok = NULL;

	tok = strtok(line, " \n\t");
	while (tok)
		i++, tok = strtok(NULL, " \n\t");
	return (i);
}
