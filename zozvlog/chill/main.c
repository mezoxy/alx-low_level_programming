#include "shell.h"

/**
 * main - Entry point
 * @ac: Number of av
 * @av: An array of strings
 * Return: 0 (SUCCESS)
 */
int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	char *line = NULL, **tokens = NULL, *path = NULL;
	size_t n = 0;
	pid_t p;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(1, "AyB$ImN$ ", 9);
		if (getline(&line, &n, stdin) == -1)
		{ free(line);
			exit(EXIT_FAILURE); }
		tokens = parse(line);
		if (!tokens || !tokens[0])
		{ free(line);
			free_array(tokens);
			continue; }
		p = fork();
		if (p < 0)
		{ perror("fork");
			free(line);
			free_array(tokens);
			continue; }
		else if (p == 0)
		{ path = find_command(tokens[0]);
			if (path)
			{
				if (execve(path, tokens, environ) == -1)
				{ perror(tokens[0]); }
				free(path);
			}
			perror(tokens[0]);
			free(line);
			free_array(tokens);
			exit(EXIT_FAILURE); }
		wait(NULL);
		free(line);
		free_array(tokens);
	}
	return (0);
}
