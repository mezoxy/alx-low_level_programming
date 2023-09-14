#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
int main()
{
	int fd1, fd2, i, j;
	char *buf;

	fd1 = open("ayoub.txt", O_RDONLY);
	fd2 = open("imane.txt", O_WRONLY);
	if (fd1 == -1 || fd2 == -1)
		write(1, "EROOR", 5);
	buf = malloc(sizeof(char) * 500);
	if (!buf)
		return (0);
	j = read(fd1, buf, 100);
	i = write(fd2, buf, j);
	close(fd1);
	close(fd2);
	printf("%d\n", j);
	return (0);
}
