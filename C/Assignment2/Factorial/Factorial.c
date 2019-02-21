/*Write a program to find a factorial of number*/
#include<stdio.h>
main()
{
	int num;
	long int fact = 1;
	char ex;
	printf("ENTER THE NUMBER : ");
	scanf_s("%d", &num);
	while (num != 0)
	{
		fact = fact * num;
		num -= 1;
	}
	printf("\nFACTORIAL = %ld", fact);
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &ex);
	getchar();
}
