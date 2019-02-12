#include<stdio.h>
main()
{
	int a = 0x13579234;
	char e;
	char* b = (char*)&a;
	if ((*b) == 0x34)
		printf("\nTHE PROCESSOR IS LITTLE ENDIAN PROCESSOR");
	else if ((*b) == 0x13)
		printf("\nTHE PROCESSOR IS BIG ENDIAN PROCESSOR");
	else
		;
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &e);
	getchar();
}