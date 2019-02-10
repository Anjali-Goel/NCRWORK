#include<stdio.h>
#include<string.h>
main()
{
	char exit;
	char text[80];
	int i, charc = 0, digc = 0, tabc = 0, spacec = 0;
	printf("Enter the text :\n");
	scanf_s("%s", &text);
	for (i = 0; i < 80; ++i);
	{
		if (text[i] > 48 && text[i] < 57)
			digc += 1;
		else if ((text[i] > 65 && text[i] < 90) || (text[i] > 97 && text[i] < 122))
			charc += 1;
		else if (text[i] == 32)
			spacec += 1;
		else
			tabc += 1;
	}
	printf("\nCHARACTERS = %d\nDIGITS = %d\nSPACES = %d\nTAB SPACES = %d", charc, digc, spacec, tabc);
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &exit);
	getchar();
}