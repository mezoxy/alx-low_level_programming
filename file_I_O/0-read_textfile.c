#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *ptr;
	int i = 0;
	char x;

	if (!filename)
		return (0);
	ptr = fopen(filename, "r");
	if (!ptr)
		return (0);
	while ((x = getc(ptr)) != EOF && i < (int)letters)
	{
		putchar(x);
		i++;
	}
	return (i);

}
