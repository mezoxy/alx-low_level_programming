#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>


/**
 * create_file - A function that creates a file
 * @filename: A pointer
 * @text_content: A pointer
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int i, y = 0;

	if (filename == NULL)
		return (-1);
	if (!text_content)
	{
		text_content = "";
	}
	while (text_content[y] != '\0')
	{
		y++;
	}
	i = open(filename, O_CREAT | O_WRONLY | O_CREAT, 0600);
	if (i == -1)
		return (-1);
	write(i, text_content, y);
	close(i);
	return (1);
}
