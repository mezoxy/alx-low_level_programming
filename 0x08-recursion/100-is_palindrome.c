#include "main.h"
/**
 * is_palindrome - A function that return 1 if a string a palindrome else 0
 * @s: A string
 * Return: 1 if the string is a palindrome
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (ifpal(s, 0, strreculen(s)));
}

int strreculen(char *s);
int ifpal(char *s, int i, int len);

/**
 * strreculen - A finction
 * @s: A string
 * Return: 0 or 1
 */

int strreculen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strreculen(s + 1));
}

/**
 * ifpal - A function
 * @s: A string
 * @i: Integer
 * @len: Length
 * Return: 0 or 1
 */
int ifpal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (ifpal(s, i + 1, len - 1));
}
