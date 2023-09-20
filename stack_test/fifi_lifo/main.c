#define _GNU_SOURCE
#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
*/

int main(int argc, char **argv)
{
	char *line = NULL, **tokens = NULL;
	FILE *fp;

	if (argc != 2)
		p_er("USAGE: monty file");
	fp = fopen(argv[1], "r");
	if (!fp)
	{ fprintf(stderr, "Error: Can't open file <%s>\n", argv[1]);
		exit(EXIT_FAILURE); }
	tokens = _getl(fp);
	/*tokens = parse(line);*/
	while (*tokens)
		printf("%s\n", *tokens), tokens++;
	fclose(fp);
	return (0);
}

/**
*/

char **_getl(FILE *file)
{
	char *line = NULL;
	int i = 0;
	char **arr_str = NULL;
	size_t n = 0;
	arr_str = malloc(sizeof(char *));
	if (!arr_str)
		p_er("Error: malloc failed");

	while (getline(&line, &n, file) == -1)
	{
		arr_str[i] = strdup(line);
		if (!arr_str[i])
			p_er("Error: malloc failed");
		i++;
		arr_str = realloc(arr_str, (i + 1) * sizeof(char *));
		if (!arr_str)
			p_er("Error: malloc failed");
	}
	arr_str[i] = NULL;
	free(line);
	return (arr_str);
}
