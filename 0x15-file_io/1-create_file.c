#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: file stream
 * @text_content: A string
 * Return: 1 if success else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
