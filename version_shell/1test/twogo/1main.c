#include "shell.h"

int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	char *line = NULL, **tokens = NULL;
	size_t n = 0;
	pid_t p;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(1, "AyB&ImN$ ", 9);
		if (getline(&line, &n, stdin) == -1)
		{
			free(line);
			exit(EXIT_FAILURE);
		}
		tokens = parse(line);
		if (!tokens || tokens[0])
		{
			free(line);
			free_array(tokens);
			continue;
		}
		p = fork();
		fork_check(p, line, tokens, av);
	}
	return (0);
}
