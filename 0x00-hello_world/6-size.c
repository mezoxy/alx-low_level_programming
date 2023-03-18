#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %ld\n byte(s)", sizeof(b));
	printf("size of an int: %ld\n byte(s)", sizeof(a));
	printf("size of a long int: %ld\n byte(s)", sizeof(c));
	printf("size of a long long int: %ld\n byte(s)", sizeof(d));
	printf("size of a float: %ld\n byte(s)", sizeof(e));
	return (0);
}
