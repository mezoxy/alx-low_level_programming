#include "shell.h"

int main(int ac, char **av)
{
	char *line = NULL, *arg, **tokens = NULL, *path;
	size_t n = 0;
	pid_t p;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(1, "#SHisLONG$ ", 11);
		if (getline(&line, &n, stdin) == -1)
		{
			free(line);
			exit(EXIT_FAILURE);
		}
		tokens = parse(line);
		if (!tokens || !tokens[0])
		{
			free(line);
			free_array(tokens);
			continue;
		}
		p = fork();
		if (p < 0)
		{
			perror("fork");
			free(line);
			free_array(tokens);
			continue;
		}
		else if (p == 0)
		{
			path = find_command(tokens[0]);
			if (path)
			{
				if (execve(path, tokens, environ) == -1)
					perror(tokens[0]);
				free(path);
			}
			perror(tokens[0]);
			free(line);
			free_array(tokens);
			exit(EXIT_FAILURE);
		}
		wait(NULL);
		free(line);
		free_array(tokens);
	}
	return (0);
}
