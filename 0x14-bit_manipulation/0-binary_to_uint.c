#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * check_string - A function that checks if the string is clean or not
 * @str: A string
 * Return: lenght of string
 */

unsigned int check_string(const char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '0' && str[i] != '1')
		{
			return (0);
		}
		i++;
	}
	return (i);
}

/**
 * binary_to_uint - A function that converts a binary to an int
 * @b: A pointer
 * Return: Integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;

	if (!b)
		return (0);
	if (check_string(b) == 0)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '1')/* && (b[i + 1] == '1' || b[i + 1] == '0'))*/
			return (binary_to_uint(b + 1) + pow_two(check_string(b) - i - 1));
		if (b[i] == '0')/* && (b[i + 1] == '1' || b[i + 1] == '0'))*/
			return (binary_to_uint(b + 1));
		i++;
	}
	return (0);
}
/**
 * pow_two - A function that calculate the power of 2
 * @x: The power
 * Return: 2 to the power of x
 */
unsigned int pow_two(unsigned int x)
{
	if (x == 1)
		return (2);
	if (x == 0)
		return (1);
	return (2 * pow_two(x - 1));
}
