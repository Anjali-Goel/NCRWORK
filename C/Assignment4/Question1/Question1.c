#include<stdio.h>
main()
{
	int i, j;
	float table[2][3] = { {1.1,1.2,1.3},{2.1,2.2,2.3} };
	char ex;
	for(i = 0; i < 2; ++i)
	{
		for (j = 0; j < 3; ++j)
			printf(" %f ", table[i][j]);
		printf("\n");
	}
	printf("\ntable = %d", table);
	printf("\n(table + 1)         = %d", (table + 1));
	printf("\n*(table + 1)        = %d", *(table + 1));
	printf("\n(*(table + 1) + 1)  = %d", (*(table + 1) + 1));
	printf("\n(*(table) + 1)      = %d", (*(table) + 1));
	printf("\n*(*(table + 1) + 1) = %f", *(*(table + 1) + 1));
	printf("\n*(*(table) + 1)     = %f", *(*(table) + 1));
	printf("\n*(*(table + 1))     = %f", *(*(table + 1)));
	printf("\n*(*(table) + 1) + 1 = %f", *(*(table)+1) + 1);
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &ex);
	getchar();
}