#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char ex;
	char* color[6] = { "red", "green", "blue", "white", "black", "yellow" };
	for (i = 0; i < 6; ++i)
		printf(" %s ", *(color + i));
	printf("\ncolor : %d", color);
	printf("\n(color + 2) : %d", (color + 2));
	printf("\n*color : %s", *color);
	printf("\n*(color + 2) : %s",*(color + 2));
	printf("\ncolor[5] : %s", color[5]);
	printf("\n*(color + 5) : %s", *(color + 5));
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &ex);
	getchar();
}