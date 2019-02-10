#include<stdio.h>
int checkprime(int);
main()
{
	int l, h, x, i;
	char ex;
	printf("ENTER THE INTERVAL : ");
	scanf_s("%d %d", &l, &h);
	for (i = l; i <= h; ++i)
	{
		x = checkprime(i);
		if (x == 1)
			printf(" %d ", i);
	}
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &ex);
	getchar();
}