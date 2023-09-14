#include <stdio.h>
int revers_bit(unsigned int n);

int revers_bit(unsigned int n)
{
	int num = n, i = 1;
	while (num)
	{
		n = n ^ i;
		i = i << 1;
		num = num >> 1;
	}
	return (n);
}
int main(void)
{
	printf("the number 8 will be %d\n", revers_bit(8));
	printf("the number 178 will be %d\n", revers_bit(178));
	printf("the number 2 will be %d\n", revers_bit(2));
}
/**
 * this code is by Chat gpt
 * unsigned int reverse_bits(unsigned int n)
 * {
 *     unsigned int result = 0;
 *         int i = 0;
 *             
 *       while (i < sizeof(unsigned int) * 8)
 *       {
 *               result = (result << 1) | (n & 1);
 *               n >>= 1;
 *               i++;
 *       }     
 * return result;
 *}
 */
