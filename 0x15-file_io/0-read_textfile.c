#include "main.h"
#include <stdlib.h>
/**
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t r, w;

	buf = malloc(sizeof(char) * (letters + 1));
	if (!buf)
		return (0);
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	r = read(fd, buf, letters);
	if (r == -1)
		return (0);
	w = write(1, buf, letters);
	if (w == -1)
		return (0);
	free(buf);
	close (fd);
	return (w);
}
