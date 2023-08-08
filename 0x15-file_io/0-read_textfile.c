#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * read_textfile - A function that reads a text file and print ot to the POSIX
 * @filename: File to be read and printed
 * @letters: Num of char to be read and printed
 * Return: Num of actual number of letters printed and read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *ptr;
	ssize_t i = 0;
	char x;

	if (!filename)
		return (0);
	ptr = fopen(filename, "r");
	if (!ptr)
		return (0);
	while ((x = getc(ptr)) != EOF && i < (ssize_t)letters)
	{
		putchar(x);
		i++;
	}
	fclose(ptr);
	return (i);

}
