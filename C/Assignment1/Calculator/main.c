/*Develop a calculator program with 4 functionalities namely addition, substraction,
multiplication and division. Use multifile program and also use storage class specifiers
wherver required.*/
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
	int a, b, op;
	char exit;
	printf("ADD=1, SUB=2, MUL=3, DIV=4\nCHOOSE THE OPERATION : ");
	scanf_s("%d", &op);
	printf("\nENTER THE OPERANDS : ");
	scanf_s("%d %d", &a, &b);
	switch (op)
	{
	case 1 : res = add(a, b);
		printf("\nSUM = %d", res);
		break;
	case 2: res = sub(a, b);
		printf("\nDIFFERENCE = %d", res);
		break;
	case 3 : prod = mul(a, b);
		printf("\nPRODUCT = %ld", prod);
		break;
	case 4: quo = div(a, b);
		printf("\nQUOTIENT = %f", quo);
		break;
	default : printf("\n!!!Invalid Operation!!!");
	}
	printf("\nPress Enter to exit");
	scanf_s("%c", &exit);
	getchar();
}