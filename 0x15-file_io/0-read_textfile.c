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
	FILE *fptr;
	char x;
	size_t i = 0;

	if (!filename)
		return (0);
	fptr = fopen(filename, "r");
	if (!fptr)
		return (0);
	while (i < letters && (x = fgetc(fptr)) != EOF)
	{
		putchar(x);
		i++;
		if (feof(fptr))
			return (i);
		if (ferror(fptr))
			return (0);
	}
	fclose(fptr);
	return (i);
}
