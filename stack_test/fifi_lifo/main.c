#define _GNU_SOURCE
#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
*/

int main(int argc, char **argv)
{
	char *line = NULL, **tokens = NULL, **tok = NULL;
	FILE *fp;
	int i, j = 0;

	if (argc != 2)
		p_er("USAGE: monty file");
	fp = fopen(argv[1], "r");
	if (!fp)
	{ fprintf(stderr, "Error: Can't open file <%s>\n", argv[1]);
		exit(EXIT_FAILURE); }
	tokens = _getl(fp);
	for (i = 0; tokens[i] != NULL; i++)
	{
		tok = parse(tokens[i]);
		while (tok[j] != NULL)
		{
			printf("%s", tok[j]);
			j++;
		}
		free(tokens[i]); }
	free(tokens);
	fclose(fp);
	return (0);
}
