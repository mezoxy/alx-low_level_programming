#include "monty.h"

/**
*/
char **array = NULL;

int main(int argc, char **argv)
{
	FILE *f;
	char *line = NULL, *copy_line = NULL;
	instruction_t op_fun[] = {{"push", _push}, {"pall", _pall}, {NULL, NULL}};
	size_t len = 0;
	unsigned int i, j = 1;
	stack_t *stack;

	if (argc != 2)
	{ dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE); }
	f = fopen(argv[1], "r");
	if (f == NULL)
	{ dprintf(2, "Error: Can't open file <%s>\n", argv[1]);
		exit(EXIT_FAILURE); }
	while (getline(&line, &len, f) != -1)
	{ copy_line = line;
		array = parse(copy_line);
		if (array[0])
			if (check_instr(array))
				while (op_fun[i].opcode)
					if (strcmp(op_fun[i].opcode, array[0]) == 0)
						op_fun[i].f(&stack, j);
			else
			{ printf("L<%d>: unknown instruction <%s>\n", j, array[0]);
				exit(99); }
		free_array(array);
		j++;
	}
	free(line);
	fclose(f);
	return (0);
}

/**
 */

int check_instr(char **str)
{
	char *instr[] = {"pall", "pint", "pop", "swap", NULL};
	int i;

	if (strcmp(str[0], "push") == 0)
	{
		if (str[1])
		{
			if (str[2] == NULL)
				return (1);
			return (0); }
		return (0);
	}

	i = 0;
	while (instr[i])
	{
		if (strcmp(instr[i], str[0]) == 0)
		{
			if (!str[1])
				return (1);
			return (0);
		}
		i++; }
	return (0);
}

char **parse(char *str)
{
	char *token = NULL, **array = NULL, *line1 = NULL;
	int i = 0, array_size;

	line1 = strdup(str);
	array_size = count(line1);
	free(line1);
	array = malloc(sizeof(char *) * (array_size + 1));
	if (!array)
	{ free(str);
		return (NULL); }
	token = strtok(str, " \n\t");
	while (token)
	{
		array[i] = strdup(token);
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

void free_array(char **tokens)
{
	int h;

	if (!tokens)
		return;
	for (h = 0; tokens[h]; h++)
		free(tokens[h]);
	free(tokens);
}

int count(char *line)
{
	int i = 0;
	char *tok = NULL;

	tok = strtok(line, " \n\t");
	while (tok)
		i++, tok = strtok(NULL, " \n\t");
	return (i);
}
