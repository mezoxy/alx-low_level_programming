#include <stdio.h>
/**
 * sum_array - A function that retruns the sum of even num in the array
 * @arr[]: an array
 * Return: The sum
 */

int sum_array(int arr[], const int n)
{
	int i = 0, sum = 0;

	while (i < n)
	{
		if (!(arr[i] & 1))
			sum += arr[i];
		i++;
	}
	return (sum);
}
int main(void)
{
	int ar[9] = {10, 11, 2, 5, 8, 12, 6, 0, 5};
	int su = sum_array(ar, 9);
	printf("The sum of the even number in the array is : %d\n", su);
	return (0);
}
