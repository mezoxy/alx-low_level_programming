#include "main.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>

/**
 * create_file - A function that creates a file
 * @filename: A pointer
 * @text_content: A pointer
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int i, j;

	if (!filename)
		return (-1);
	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0666);
	j = write(i, text_content, strlen(text_content));
	if (i == -1 || j == -1)
		return (-1);
	close(i);
	return (1);
}
