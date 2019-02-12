#include<stdio.h>
main()
{
	FILE* fp;
	char e, ch;
	fopen_s(&fp, "file.txt", "r");
	if (fp == NULL)
		printf("\nCannot Open File");
	else
	{
		while (!feof(fp))
		{
			ch = fgetc(fp);
			printf("%c", ch);
		}
	}
	printf("\n\nPRESS ENTER TO EXIT");
	scanf_s("%c", &e);
	getchar();
}