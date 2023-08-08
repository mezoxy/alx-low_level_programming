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

	if (!filename)
		return (0);
	i = open(filename, 1);
	if (i == -1)
		return (0);
	text = malloc(sizeof(char) * letters);
	if (!text)
		return (0);
	j = read(i, text, letters);
	if (j == -1)
		return (0);
	k = write(1, text, j);
	if (k == -1)
		return (0);
	free(text);
	close(i);
	return (k);
}
