#include "main.h"
/**
 * _isalpha - Function that checks for the alphabetic characters
 *
 * Return: 1 if c is a letter, 0 otherwise
 * @c: Input
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
