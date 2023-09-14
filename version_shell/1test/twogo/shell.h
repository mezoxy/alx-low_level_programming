#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/wait.h>

extern char **environ;

char *my_strdup(const char *str);
char *find_command(const char *cmd);
void *my_memcpy(void *dest, const void *src, size_t n);
size_t my_strlen(const char *str);
void fork_check(pid_t pid, char *line, char **tokens, char **argv);
int my_strncmp(const char *s1, const char *s2, size_t n);
char *my_getenv(const char *name);
void free_array(char **tokens);
char **parse(char *str);
char **_realloc(char **ptr, size_t size);

#endif

