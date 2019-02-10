#include<stdio.h>
int pow(int n, int p)
{
	int i, res = 1;
	for (i = 0; i < p; ++i)
		res = res * n;
	return res;
}