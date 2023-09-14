#include <stdio.h>

int fun_count(int n);
int fun_count (int n)
{
	int  i = 0;

	while (n != 0)
	{
		if (n  & 1)
			i += 1;
		n >>= 1;
	}
	return (i);
}
int main(void)
{
	int d, v, t, s;
	v = fun_count(0);
	d = fun_count(15);
	s = fun_count(7);
	t = fun_count(98);
	printf("%d\n%d\n%d\n%d\n", v, d, s, t);
	return (0);
}
