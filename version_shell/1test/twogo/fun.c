#include "shell.h"

char *my_strdup(const char *str) {
    size_t len = my_strlen(str) + 1;
    char *new_str = malloc(len);
    if (new_str) {
        my_memcpy(new_str, str, len);
    }
    return new_str;
}

void *my_memcpy(void *dest, const void *src, size_t n) {
    unsigned char *d = dest;
    const unsigned char *s = src;
    while (n--) {
        *d++ = *s++;
    }
    return dest;
}

size_t my_strlen(const char *str) {
    const char *s = str;
    while (*s) {
        s++;
    }
    return s - str;
}

void fork_check(pid_t pid, char *line, char **tokens, char **argv) {
    if (pid < 0) {
        perror("fork");
        free(line);
        free_array(tokens);
        exit(errno);
    } else if (pid == 0) {
        if (execve(tokens[0], tokens, environ) == -1) {
            perror(argv[0]);
            free(line);
            free_array(tokens);
            exit(EXIT_FAILURE);
        }
    } else {
        wait(NULL);
        free(line);
        free_array(tokens);
    }
}

