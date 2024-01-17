#include <math.h>
#include <stdio.h>

int main()
{
	int x = (int)sqrt(10);
	printf("%d\n", x);
	for (int i = 0; i < 20; i +=x)
		printf("%d\n", i);
	return (0);
}
