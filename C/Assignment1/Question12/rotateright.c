#include<stdio.h>
int rotate_right(int n, int b)
{
	int i, a, c, x, l=0;
	a = n;
	while (a != 0);
	{
		a = a / 10;
		l += 1;
	}
	for (i = 0; i < b; ++i)
	{
		a = n % 10;
		c = n / 10;
		x = a * pow(10, l - 1) + c;
	}
	return x;
}