#include "our_shell.h"

/**
 * shell_no_interactive - unix command line interpreter
 *
 * Return: void
 */
void shell_no_interactive(void)
{
	char *line;
	char **args;
	int status = -1;

	do {
		line = read_stream();
		args = parse(line); /* tokenize line */
		status = exec_built_in_com(args);
		/* avoid memory leaks */
		free(line);
		free(args);
		/* exit with status */
		if (status >= 0)
		{
			exit(status);
		}
	} while (status == -1);
}
