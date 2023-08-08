#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - A function that reads a text file and print ot to the POSIX
 * @filename: File to be read and printed
 * @letters: Num of char to be read and printed
 * Return: Num of actual number of letters printed and read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	ssize_t i, j, k;

	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	text = malloc(sizeof(char) * letters);
	if (!text)
		return(0);
	j = read(i, text, letters);
	k = write(STDOUT_FILENO, text, j);
	free(text);
	close(i);
	return (k);
}
