#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - A function that prints all
 * @format: A pointer
 */
void print_all(const char * const format, ...)
{
	va_list y;
	char *str;
	char *p = "";

	va_start(y, format);
	if (format)
	{
		const char *ptr = format;

		while (*ptr != '\0')
		{
			switch (*ptr)
			{
				case 'i':
					printf("%s%d", p, va_arg(y, int));
					break;
				case 'f':
					printf("%s%f", p, va_arg(y, double));
					break;
				case 'c':
					printf("%s%c", p, va_arg(y, int));
					break;
				case 's':
					str = va_arg(y, char *);

					if (!str)
						str = "(nil)";
					printf("%s%s", p, str);
					break;
				default:
					break;
			}
			p = ", ";
			ptr++;
		}
	}
	printf("\n");
	va_end(y);
}
