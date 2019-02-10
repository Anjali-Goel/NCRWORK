#include<stdio.h>
main()
{
	int i;
	int x[8] = { 10,20,30,40,50,60,70,80 };
	char ex;
	printf("ARRAY X IS \n");
	for (i = 0; i < 8; ++i)
		printf("%d ", x[i]);
	printf("\nx = %d", x);
	printf("\n(x + 2) = %d", (x + 2));
	printf("\n*x = %d", *x);
	printf("\n(*x + 2) = %d", (*x + 2));
	printf("\n8(x + 2) = %d", *(x + 2));
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &ex);
	getchar();
}