#include<stdio.h>
#include<string.h>
int replace(char*);
main()
{
	int n;
	char exit;
	char* s1 = {"0"};
	printf("ENTER THE STRING : ");
	scanf_s("%s", &s1);
	n = replace(s1);
	printf("\nNO. OF SPACES REPLACED : %d", n);
	printf("\nNEW STRING\n%s", s1);
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &exit);
	getchar();
}