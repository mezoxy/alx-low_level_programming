#include "main.h"
/**
 * is_palindrome - A function that determine if a string is it a palindrome or not
 * Retuen: 1 if the string is it palindrom 0 otherwise
 *@s: String
 */

void _puts_recursion(char *s);
void _print_rev_recursion(char *s);

int is_palindrome(char *s)
{
	char *h = _print_rev_recursion(s);
	char *hh = _puts_recursion(s);

	if (*h != *hh)
	{
		return (0);
	}
	return (1);
}
