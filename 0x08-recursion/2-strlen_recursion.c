#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - A function that returns the lenght of a string
 * @s: a string
 * Return: An integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (_strlen_recursion(s + 1) + 1);

}
