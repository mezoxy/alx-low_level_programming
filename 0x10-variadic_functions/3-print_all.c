#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
/**
 * print_all - A function that prints anything
 * @format: A const pointer
 */
void print_all(const char * const format, ...)
{
	int i;
	float f;
	char c;
	char *s;
	va_list y;

	va_start(y, format);
	if (format)
	{
		int chek = 0;
		const char *ptr = format;

		while (*ptr != '\0')
		{
			if (chek)
			{
				printf(", ");
			}
			switch (*ptr)
		{
			case 'i':
				{
				i = va_arg(y, int);
				printf("%d", i);
				chek = 1;
				break;
				}
			case 'f':
				{
				f = va_arg(y, double);
				printf("%f", f);
				chek = 1;
				break;
				}
			case 'c':
				{
				c = va_arg(y, int);
				printf("%c", c);
				chek = 1;
				break;
				}
			case 's':
				{
				s = va_arg(y, char *);
				if (s == NULL)
					printf("(nil)");
				printf("%s", s);
				chek = 1;
				break;
				}
			default:
				break;
		}
		ptr++;
		}
	}
	printf("\n");
}
