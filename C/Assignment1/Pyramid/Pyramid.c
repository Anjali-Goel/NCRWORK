/*Generate the following pyramid of numbers using nested loops
    1
   212
  32123
 4321234
543212345*/
#include<stdio.h>
main()
{
	int i, j;
	char exit;
	for (i = 1; i <= 5; ++i)
	{
		for (j = 5; j > i; --j)
			printf(" ");
		for (j = i; j >= 1; --j)
			printf("%d", j);
		for (j = 2; j <= i; ++j)
			printf("%d", j);
		for (j = 5; j > i; --j)
			printf(" ");
		printf("\n");
	}
	scanf_s("%c", &exit);
	getchar();
}