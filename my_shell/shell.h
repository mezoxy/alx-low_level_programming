#ifndef SHELL_H
#define SHELL_H

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define dl " \n\t"
extern char **environ;

char **parse(char *line);
char *find_command(const char *com);
void *_memcpy(void *s1, const void *s2, size_t n);
char *_strdup(const char *s);
char *_getenv(const char *name);
size_t _strncmp(const char *s1, const char *s2, size_t num);
size_t _strlen(const char *s);
void free_array(char **tokens);
char **_realloc(char **array, size_t size);

#endif
