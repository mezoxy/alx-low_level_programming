#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	unsigned long int i = atoi(argv[1]);
	unsigned long int j = atoi(argv[2]);

	printf("%lu\n", i % j);
	return (0);
}
