#include <stdio.h>
/**
 * fact - A function that calculate the factorial of a given number
 * @n: A number
 * Return: An integer
 */
int fact(unsigned int n);

int fact(unsigned int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (n * fact(n - 1));
}
int main(void)
{
	printf("the fac of 3 is = %d\nthe fac of 4 is = %d\nthe fac of 8 is = %d\nthe fac of 5 is = %d\n", fact(3), fact(4), fact(8), fact(9));
	return (0);
}
