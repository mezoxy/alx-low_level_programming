#include <stdio.h>
/**
 * In this code we want to implement a function that yoggles (filips the nth bit) of an int
 * Return: void
 */
int bit_flip(int n, int index)
{
	if (index > sizeof(int) * 8)
		return (-1);
	return (n & ~((n >> index & 1 ) << index));
}
int main(void)
{
	printf("The value of bit in the 2sc of 6 is %d\n", bit_flip(6, 2));
	printf("The value of bit in the 0th of 9 is %d\n", bit_flip(9, 0));
	printf("The value of bit in the 1th of 2 is %d\n", bit_flip(2, 1));
	printf("The value of bit in the 2sc of 14 is %d\n", bit_flip(14, 2));
	printf("The value of bit in the 3th of 14 is %d\n", bit_flip(14, 3));
	printf("The value of bit in the 1th of 14 is %d\n", bit_flip(14, 1));
			return (0);
}
