#include "main.h"
/**
 * rev_string - Function that reverses a string
 * @s: Pointer
 */
void rev_string(char *s)
{
	int n = 0;
	int i;
	char ch;

	while (s[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n / 2; i++)
	{
		ch = s[i];
		s[i] = s[n - i -1];
		s[n - i - 1] = ch;
	}
}
