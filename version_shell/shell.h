#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/wait.h>

extern char **environ;

int exe(char **tokens, char **av);
int ncompare(char *s1, char *s2, size_t n);
int count(char *line);
void prompt(void);
char *_getline(void);
char **_realloc(char **ptr, size_t size);
char *_strdup(const char *str);
void *_memcpy(void *dest, const void *src, size_t n);
size_t _strlen(const char *str);
void fork_check(pid_t pid, char *line, char **tokens, char **argv);
void free_array(char **tokens);
char **parse(char *str);

#endif

