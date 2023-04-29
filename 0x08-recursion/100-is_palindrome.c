#include "main.h"
#include <string.h>
/**
 * is_palindrome - Determine if a string is it a palindrome or not
 * Return: 1 if the string is it palindrom 0 otherwise
 *@s: String
 */

int is_palindrome(char *s)
{
	unsigned long int i;
	int k;

	if (!s)
	{
		return (1);
	}
	while (i < strlen(s) / 2)
	{
		if (s[i] != s[strlen(s) - 1 - i])
		{
			k = 0;
		}
		else
		{
			k = 1;
		}
		i++;
	}
	return (k);
}
