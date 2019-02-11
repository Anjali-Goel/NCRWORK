#include<stdio.h>
#include<string.h>
main()
{
	char* s[] = { "we will teach you how to"; "Move a mountain"; "Level a building"; "Erase the past"; "Make a million" };
	char exit;
	int i,en=0;
	for (i = 0; i < 4; ++i)
	{
		for (j = 0; j < strlen(s[i]); ++j)
		{
			if (*(s + i + j) == "e")
				e += 1;
		}
	}
	printf("\nNUMBER OF e's in the given string are : ", e);
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &exit);
	getchar();
}