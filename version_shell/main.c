#include "shell.h"

/**
 * prompt - A function that prints "AyB&ImN$ "
 */

void prompt(void)
{
	if (isatty(STDIN_FILENO))
		write(1, "AyB&ImN$ ", 9);
}

/**
 * _getline - A function that reads the input
 * Return: A pointer
 */

char *_getline(void)
{
	char *line = NULL;
	size_t n = 0;

	if (getline(&line, &n, stdin) == -1)
	{ free(line);
		exit(0); }
	return (line);
}

/**
 * main - Entry point
 * @ac: Number of args
 * @av: An Array of strings
 * Return: 0 (SUCCESS)
 */

int main(int ac __attribute__((unused)), char **av)
{
	char *line = NULL, **tokens = NULL;
	int status = 0;

	while (1)
	{
		prompt(), line = _getline();
		tokens = parse(line);
		if (tokens && tokens[0])
		{

			if (access(tokens[0], F_OK) == -1)
				perror(av[0]);
			else
			{
			status = exe(tokens, av); }
		free(line);
		free_array(tokens); }
	}
	return (status);
}

/**
 * exe - A function that execute the command
 * @tokens: An array of pointers
 * @av: Args
 * Return: An int
 */

int exe(char **tokens, char **av)
{
	int stat, exit_stat;

	pid_t p;

	p = fork();
	if (p < 0)
	{
		perror("fork");
		free_array(tokens);
		exit(EXIT_FAILURE); }
	else if (p == 0)
	{
		if (execve(tokens[0], tokens, environ) == -1)
		{
			perror(av[0]); } }
	else
	{ waitpid(p, &stat, 0);
		exit_stat = WEXITSTATUS(stat); }
	return (exit_stat);
}

/**
 * ncompare - My strncmp
 * @s1: A string
 * @s2: A string
 * @n: Num of char
 * Return: 0 or 1
 */

int ncompare(char *s1, char *s2, size_t n)
{
	while ((s1 || s2) && n > 0)
	{
		if (*s1 != *s2)
			return (1);
		s1++, s2++;
		n--; }
	return (0); }
