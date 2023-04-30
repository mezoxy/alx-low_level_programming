#include "main.h"
/**
 * cap_string - Function that capitalizes all words of a string
 * Return: Uppercase character
 * @s: String
 */
char *cap_string(char *s)
{
	int i = 0, k;
	char spe[] = {',', ';', '\n', '\t', ')', '(', '{', '}', '.', ' ', '?', '!'};

	if (*(s + i) >= 97 && *(s + i) <= 122)
		*(s + i) -= 32;
	i++;
	while (*(s + i) != '\0')
	{
		for (k = 0; k < 12; k++)
		{
			if (*(s + i) == '\t')
				*(s + i) = ' ';
			if (*(s + i) == spe[k])
			{
				if (*(s + i + 1) >= 97 && *(s + i + 1) <= 122)
					*(s + i + 1) -= 32;
				break;
			}
		}
		i++;
	}
	return (s);
}
