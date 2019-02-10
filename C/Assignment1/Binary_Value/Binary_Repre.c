#include<stdio.h>
main()
{
	int a, i;
	int x[5];
	char exit;
	printf("ENTER A NUMBER BETWEEN 0-31 : ");
	scanf_s("%d", &a);
	for (i = 0; i < 5; ++i)
	{
		x[i] = a % 2;
		a = a / 2;
	}
	x[4] = 1;
	for (i = 0; i < 5; ++i)
		printf("%d", x[i]);
    printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &exit);
	getchar();
}