#ifndef MAIN_H
#define MAIN_Hi

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/wait.h>

extern char **environ;
void free_array(char **tokens);
char **parse(char *str);
char **_realloc(char **ptr, size_t size);


#endif
