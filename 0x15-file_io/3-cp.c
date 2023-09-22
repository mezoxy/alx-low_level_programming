#include "main.h"

/**
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to, i, j;
	ssize_t w, r;
	char *buf[1024];

	if (argc != 3)
	{ dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	fd_from = open(argv[1], O_RDONLY);
	r = read(fd_from, buf, 1024);
	if (fd_from == -1 || r == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	w = write(fd_to, buf, r);
	if (fd_to == -1 || w == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	i = close(fd_from);
	j = close(fd_to);
	if (j == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_to);
		exit(100); }
	if (i == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from);
		exit(100); }
	return (0);
}
