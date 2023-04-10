#include "main.h"
/**
 * _strlen - Counting how many characters
 * Return: Length of a string
 * @s: String
 */
int _strlen(char *s)
{
	int sum = 0;

	while (*s++)
	{
		sum++;
	}
	return (sum);
}
