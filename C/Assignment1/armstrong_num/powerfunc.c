#include<stdio.h>
int pow(int q, int p)
{
	int i, res = 1;
	for (i = 0; i < p; ++i)
		res = res * q;
	return res;
}