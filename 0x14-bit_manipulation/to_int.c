#include "main.h"
#include <string.h>

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	if (!b)
		return (0);
	num = 0;
	i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		num = num << 1 | (b[i] - '0');
		i++;
	}
	return (num);
}
