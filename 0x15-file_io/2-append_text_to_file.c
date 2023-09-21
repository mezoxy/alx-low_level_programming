#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: A file stream
 * @text_content: A string
 * Return: 1 or -1 if it faild
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;

	if (!text_content)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
