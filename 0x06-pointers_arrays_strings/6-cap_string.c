#include "main.h"
/**
 * cap_string - Function that capitalizes all words of a string
 * Return: Uppercase character
 * @stg: String
 */
char *cap_string(char *stg)
{
	int i;
	int j = 0;
	int k;
	char spe[] = {',', ';', '\n', '\t', ')', '(', '{', '}', '.', ' ', '?', '!'};

	while (stg[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		for (k = 0; k < 12; k++)
		{
			if (stg[i] == spe[i] && stg[i + 1] >= 97 && stg[i + 1] <= 122 && i < j)
			{
			stg[i + 1] = stg[i + 1] - 32;
			}
			else
			{
				stg[0] = stg[0] - 32;
			}
		}
	}
	return (stg);
}
