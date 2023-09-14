#include "shell.h"

void free_array(char **tokens) {
	    for (int h = 0; tokens[h] != NULL; h++) {
		            free(tokens[h]);
			        }
	        free(tokens);
}

char **parse(char *str)
{
	char *token;
	char **array = NULL;
	int i = 0;
	int array_size = 2;

	array = malloc(sizeof(char *) * array_size);
	if (!array)
		return NULL;

				    token = strtok(str, " \n\t");
				        while (token != NULL) {
						        if (i >= array_size) {
								            array_size *= 2;
									                array = _realloc(array, sizeof(char *) * array_size);
											            if (!array) {
													                    return NULL;
															                }
												            }
							        
							        array[i] = my_strdup(token);
								        if (!array[i]) {
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
			old_size++;
	}
	if (size == 0)
	{
		free(ptr);
		return NULL;
	}
	new_ptr = malloc(size);
	if (!new_ptr)
		return NULL;
	if (ptr)
	{
		size_t copy_size = sizeof(char *) * old_size;
		my_memcpy(new_ptr, ptr, copy_size);
		free(ptr);
	}
	return new_ptr;
}
