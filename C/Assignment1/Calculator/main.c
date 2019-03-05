/*Develop a calculator program with 4 functionalities namely addition, substraction,
multiplication and division. Use multifile program and also use storage class specifiers
wherver required.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double add(int,int);
double sub(int, int);
double mul(int, int);
double div(int, int);
double result = -1;
main()
{
	int operand1=0, operand2=0;
	char exit, operation;
	printf("\nENTER THE INPUTS\n");
	if (scanf("%d ", &operand1))
	{
		result = operand1;
		while (1)
		{
			if (scanf(" %c %d ", &operation,&operand2))
			{
				scanf("%c", &exit);
				if (exit == '\n')
				{
					printf("\nRESULT = %f", result);
					break;
				}
				else
				{
					switch (operation)
					{
					case '+': result = add(result, operand2);
						break;
					case '-': result = sub(result, operand2);
						break;
					case '*': result = mul(result, operand2);
						break;
					case '/': result = div(result, operand2);
						break;
					}
				}
			}
			else 
			{
				printf("\nINPUT!!!");
				break;
			}
		}
	}
	else
	{
		printf("\nENTERED!!!");
	}
	printf("\nPress Enter to exit");
	scanf_s("%c", &exit);
	getchar();
}