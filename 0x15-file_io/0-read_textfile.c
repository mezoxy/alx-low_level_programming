#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Afunction that reads a text file and prints it to stdout
 * @filename: File stream
 * @letters: Num of char
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t r, w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	r = read(fd, buf, letters);
	if (r == -1)
		return (0);
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
		return (0);
	free(buf);
	close(fd);
	return (w);
}
