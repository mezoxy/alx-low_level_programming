#include <stdio.h>
int check_power_of_two(int n);

int check_power_of_two(int n)
{
	if (n == 2)
		return (1);
	if (n & 1)
		return (0);
	return (check_power_of_two(n >> 1));
}
int main(void)
{
	int x, y;
	printf("Enter your number to check if is a power of two or not\nif it is you will get 1 else 0\n");
	scanf("%d", &x);
	y = check_power_of_two(x);
	if (y)
		printf("Your number %d is a power of two\n", x);
	else
		printf("Your number %d is not a power of two\n", x);
	return (0);
}
