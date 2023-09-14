#include "shell.h"

size_t my_strlen(const char *str) {
	    const char *s = str;
	        while (*s) {
			        s++;
				    }
		    return s - str;
}

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
		            if (my_strncmp(environ[i], name, my_strlen(name)) == 0) {
				                char *value = environ[i] + my_strlen(name) + 1;
						            return value;
							            }
			        }
	        return NULL;
}

char *find_command(const char *cmd) {
	    char *path = my_getenv("PATH");
	        if (!path) {
			        return NULL;
				    }

		    char *token = strtok(path, ":");
		        while (token) {
				        char *full_path = (char *)malloc(my_strlen(token) + my_strlen(cmd) + 2);
					        if (full_path) {
							            sprintf(full_path, "%s/%s", token, cmd);
								                if (access(full_path, X_OK) == 0) {
											                return full_path;
													            }
										            free(full_path);
											            }
						        token = strtok(NULL, ":");
							    }
			    return NULL;
}

void *my_memcpy(void *dest, const void *src, size_t n) {
	    unsigned char *d = dest;
	        const unsigned char *s = src;
		    while (n--) {
			            *d++ = *s++;
				        }
		        return dest;
}

char *my_strdup(const char *str) {
	    size_t len = my_strlen(str) + 1;
	        char *new_str = malloc(len);
		    if (new_str) {
			            my_memcpy(new_str, str, len);
				        }
		        return new_str;
}
void fork_check(pid_t pid, char *line, char **tokens) {
	    if (pid < 0) {
		            perror("fork");
			            free(line);
				            free_array(tokens);
					            exit(errno);
						        } else if (pid == 0) {
								        char *full_path = find_command(tokens[0]);
									        if (full_path) {
											            if (execve(full_path, tokens, environ) == -1) {
													                    perror(tokens[0]);
															                    free(line);
																	                    free_array(tokens);
																			                    free(full_path);
																					                    exit(EXIT_FAILURE);
																							                }
												                free(full_path);
														        } else {
																            perror(tokens[0]);
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
