#include "our_shell.h"

/* This file is for the built-in commands */

/**
 * cd_fun - A function that changes working the directory
 * @args: Destination
 * Return: An int
 */

int cd_fun(char **args)
{
	if (!args[1])
		perror("Error\n");
	if (chdir(args[1]) != 0)
		perror("Error\n");
	return (-1);
}
/**
 *
 */

int exit_fun(char **args)
{
	if (args[1])
		return (atoi(args[1]));
	return (0);
}

int env_fun(char **args)
{
	int i = 0;
	(void)(**args);

	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (-1);
}
