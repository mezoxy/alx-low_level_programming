#ifndef OUR_SHELL_H
#define OUR_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define DL " \t\n"
extern char **environ;

int cd_fun(char **args);
char *_getline(void);
char *read_stream(void);
void shell_no_interactive(void);
int execve_fun(char **args);
char **parse(char *line);
void shell_no_interactive(void);
int exit_fun(char **args);
int env_fun(char **args);
int exec_built_in_com(char **args);

/**
 */
typedef int (*our_fun)(char **);
typedef struct
{
	const char *com;
	our_fun func;
} command;
#endif
