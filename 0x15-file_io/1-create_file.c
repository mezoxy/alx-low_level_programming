#include "main.h"

/**
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
