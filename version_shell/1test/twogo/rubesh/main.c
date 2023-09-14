#include "shell.h"

extern char **environ; // Extern declaration of the environment variable

int my_strncmp(const char *s1, const char *s2, size_t n) {
    while (n > 0 && (*s1 || *s2)) {
        if (*s1 != *s2) {
            return (*s1 - *s2);
        }
        s1++;
        s2++;
        n--;
    }
    return 0;
}

char *my_getenv(const char *name) {
    for (int i = 0; environ[i] != NULL; i++) {
        if (my_strncmp(environ[i], name, my_strlen(name)) == 0 && environ[i][my_strlen(name)] == '=') {
            return environ[i] + my_strlen(name) + 1; // Return the value after the '='
        }
    }
    return NULL;
}

int main() {
    while (1) {
        if (isatty(STDIN_FILENO)) {
            write(STDOUT_FILENO, "ayoub$$ ", 8);
        }

        char *line = NULL;
        size_t len = 0;
        ssize_t read = getline(&line, &len, stdin);
        if (read == -1) {
            free(line);
            exit(EXIT_FAILURE);
        }

        char **tokens = parse(line);
        if (!tokens || !tokens[0]) {
            free(line);
            free_array(tokens);
            continue;
        }

        pid_t pid = fork();
        fork_check(pid, line, tokens);

        // Rest of the loop
    }

    return 0;
}

void fork_check(pid_t pid, char *line, char **tokens) {
    if (pid < 0) {
        perror("fork");
        free(line);
        free_array(tokens);
        exit(errno);
    } else if (pid == 0) {
        char *cmd_path = find_command(tokens[0]); // Find full path of the command
        if (cmd_path) {
            execve(cmd_path, tokens, environ);
            perror("execve");
        } else {
            perror("Command not found");
        }
        free(line);
        free_array(tokens);
        exit(EXIT_FAILURE);
    } else {
        wait(NULL);
        free(line);
        free_array(tokens);
    }
}

