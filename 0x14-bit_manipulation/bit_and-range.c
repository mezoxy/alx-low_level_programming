#include <stdio.h>
int strange_num(int arr[], int size)
{
	int i, num = 0;

	i = 0;

	while (i < size)
	{
		num ^= arr[i];
		i++;
	}
	return (num);
}
int main(void)
{
	int array[9] = {15, 13, 1, 4, 4, 13, 8, 15, 1};
	printf("The stranger number is %d\n", strange_num(array, 9));
	return (0);
}
