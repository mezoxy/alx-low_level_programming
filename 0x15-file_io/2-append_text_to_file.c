#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * append_text_to_file - A function that append_text_to_file
 * @filename: A pointer
 * @text_content: A pointer
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, k;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (k = 0; text_content[k];)
		{
			k++;
		}
	}
	i = open(filename, O_WRONLY | O_APPEND);
	J = write(i, text_content, k);

	if (i == -1 || j == -1)
		return (-1);
	close(i);
	return (1);
}
