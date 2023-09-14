#include <stdio.h>
int bit_count(int n)
{
	int i = 0;

	while (n)
	{
		if (n & 1)
			i++;
		n >>= 1;
	}
	return (i);
}
int main(void)
{
	printf("The number of set bits to one in 15 is :%d\n",  bit_count(15));
	printf("The number of set bits to one in 90 is :%d\n",  bit_count(90));
	printf("The number of set bits to one in 911111 is :%d\n",  bit_count(911111));
	printf("The number of set bits to one in 89 is :%d\n",  bit_count(89));
	printf("The number of set bits to one in 1024 is :%d\n",  bit_count(1024));
	return (0);
}
