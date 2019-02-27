/*Develop a calculator program with 4 functionalities namely addition, substraction,
multiplication and division. Use multifile program and also use storage class specifiers
wherver required.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int add(int, int);
int sub(int, int);
long long int mul(int, int);
float div(int, int);
int res = -1;
long long int prod = -1;
float quo = -1;
main()
{
	int operand1=0, operand2,result=0;
	char exit, operation=0;
	if (scanf("%d", &operand1))
	{
		
	}
	else
		printf("\nINVALID INPUT ENTERED.");
	printf("\nPress Enter to exit");
	scanf_s("%c", &exit);
	getchar();
}