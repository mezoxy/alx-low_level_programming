#include "shell.h"
int count(char *line)
{
	int i = 0;
	char *tok = NULL;

	tok = strtok(line, " \n\t");
	while (tok)
		i++, tok = strtok(NULL, " \n\t");
	return (i);
}
