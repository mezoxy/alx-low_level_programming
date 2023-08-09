#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>


/**
 * create_file - A function that creates a file
 * @filename: A pointer
 * @text_content: A pointer
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int i, j, h, d;

	if (filename == NULL)
		return (-1);
	d = (int)open(filename, O_RDONLY);
	if (d == -1)
	{
		j = (int)open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		h = (int)write(j, text_content, strlen(text_content));
		if (h == -1)
		{
			close(j);
			return (-1);
		}
		close(j);
		return (1);
	}
	i = (int)open(filename, O_WRONLY | O_TRUNC | O_CREAT);
	if (i == -1)
		return (-1);
	h = (int)write(i, text_content, strlen(text_content));
	if (h == -1)
	{
		close(i);
		return (-1);
	}
	close(i);
	return (1);
}
