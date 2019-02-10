#include<stdio.h>
int checkprime(int i)
{
	int x = -1, j;
	for (j = 2; j < i / 2; ++j)
	{
		if (i % j == 0)
		{
			x = 0;
			break;
		}
		else
			x = 1;
	}
	return x;
}