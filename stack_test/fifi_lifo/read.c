#include "monty.h"

/**
 */

char **_getl(FILE *fp)
{
	char *line = NULL;
	size_t n = 0, size_arr = 0;
	char **array = NULL, *copy = NULL;

	array = malloc(sizeof(char *) * (count(fp) + 1));
	if (!array)
		p_er("Error: malloc failed");
	while (getline(&line, &n, fp) != -1)
	{
		copy = strdup(line);
		if (!copy)
			p_er("Error: malloc failed");
		array[size_arr] = copy;
		size_arr++;
	}
	free (line);
	return (array);
}
int count(FILE *fp)
{
	int i = 0;
	char *line = NULL;
	size_t n = 0;

	if (getline(&line, &n, fp) == -1)
		return (0);
	while (getline(&line, &n, fp) != -1)
		i++;
	fseek(fp, 0, SEEK_SET);
	free(line);
	return (i);
}
