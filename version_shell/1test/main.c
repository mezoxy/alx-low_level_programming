#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/wait.h>
extern char **environ;
int exe(char **tokens, char **av);
int ncompare(char *s1, char *s2, size_t n);
void prompt(void);
char *_getline(void);
char *_strdup(const char *str);
void *_memcpy(void *dest, const void *src, size_t n);
size_t _strlen(const char *str);
void free_array(char **tokens);
char **parse(char *str);
int count(char *line);
int count(char *line)
{
    int i = 0;
    char *tok = NULL;
    tok = strtok(line, " \n\t");
    while (tok)
        i++, tok = strtok(NULL, " \n\t");
    return (i);
}
/**
* parse - A function that split the input
* @line: The input
* Return: An array of strings
*/
char **parse(char *str)
{
    char *token = NULL, **array = NULL, *line1 = NULL;
    int i = 0, array_size;
    line1 = _strdup(str);
    array_size = count(line1);
    free(line1);
    array = malloc(sizeof(char *) * (array_size + 1));
    if (!array)
    {
        free(str); /* hada lizdt*/
        return NULL;
    }
    token = strtok(str, " \n\t");
    while (token)
    {
        array[i] = _strdup(token);
        if (!array[i])
        {
            free(str); /* hada lizdt*/
            free_array(array);
            return NULL;
        }
        token = strtok(NULL, " \n\t");
        i++;
    }
    array[i] = NULL;
    return array;
}
char **_realloc(char **ptr, size_t size)
{
    char **new_ptr = NULL;
    size_t old_size = 0;
    if (ptr)
    {
        while (ptr[old_size] != NULL)
        {
            old_size++;
        }
    }
    if (size == 0)
    {
        free_array(ptr);
        return NULL;
    }
    new_ptr = malloc(size * sizeof(char *));
    if (!new_ptr)
    {
        free_array(ptr);
        return NULL;
    }
    if (ptr)
    {
        size_t copy_size = sizeof(char *) * (old_size + 1);
        _memcpy(new_ptr, ptr, copy_size);
        free_array(ptr); /*instead of free*/
    }
    return new_ptr;
}
/**
*/
void free_array(char **tokens)
{
    int h;
    if (!tokens)
        return;
    for (h = 0; tokens[h]; h++)
        free(tokens[h]);
    free(tokens);
}
/**
*/
size_t _strlen(const char *str)
{
    const char *s = str;
    while (*s)
        s++;
    return (s - str);
}
/**
*/
void *_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;
    while (n--)
        *d++ = *s++;
    return dest;
}
/**
*/
char *_strdup(const char *str)
{
    size_t len;
    char *new_str = NULL;
    if (!str)
        return (NULL);
    len = _strlen(str) + 1;
    new_str = malloc(len);
    if (new_str)
        _memcpy(new_str, str, len);
    return (new_str);
}
void prompt(void)
{
    if (isatty(STDIN_FILENO))
        write(1, "AyB&ImN$ ", 9);
}
/**
*/
char *_getline(void)
{
    char *line = NULL;
    size_t n = 0;
    if (getline(&line, &n, stdin) == -1)
    {
        free(line);
        exit(0);
    }
    return (line);
}
int exe(char **tokens, char **av)
{
    int stat, exit_stat;
    pid_t p;
    p = fork();
    if (p < 0)
    {
        perror("fork");
        free_array(tokens);
        exit(EXIT_FAILURE);
    }
    else if (p == 0)
    {
        if (execve(tokens[0], tokens, environ) == -1)
        {
            perror(av[0]);
            free_array(tokens);
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        waitpid(p, &stat, 0);
        exit_stat = WEXITSTATUS(stat);
    }
    return (exit_stat);
}
int ncompare(char *s1, char *s2, size_t n)
{
    while ((s1 || s2) && n > 0)
    {
        if (*s1 != *s2)
            return (1);
        s1++;
        s2++;
        n--;
    }
    return (0);
}
int main(int ac, char **av)
{
    char *line = NULL, **tokens = NULL;
    int status = 0;
    pid_t p;
    while (1)
    {
        prompt();
        line = _getline();
        tokens = parse(line);
        if (tokens && tokens[0])
        {
            status = exe(tokens, av);
        }
        free(line);
        free_array(tokens);
    }
    return (0);
}
