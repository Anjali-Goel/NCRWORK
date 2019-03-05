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
int main()
{
	int operand1=0, operand2=0;
	char exit, operation;
	printf("\nENTER THE INPUTS\n");
	if (scanf("%d", &operand1))   //TAKING INPUT OPERAND
	//IF INPUT ENTERED IS INTEGER
	{
		result = operand1;
		//continuously takes inputs till \n is encountered
		while (1)
		{
			if (scanf("%c", &operation))
				//if operator's a character
			{
				if (operation == '\n')
					//IF A \n IS ENCOUNTERD PRINTS THE RESULT
				{
					printf("\nRESULT = %f", result);
					break;
				}
				else
					//IF A VALID CHARACTER IS GIVEN TAKES THE OTHER OPERAND
				{
					if (scanf("%d", &operand2))
						//IF A VALID INTEGER OPERAND IS ENTERED,CHECKS FOR THE OPERATION TO BE PERFORMED
						//IF THE CHARACTER ENTERED IS NOT OPERATOR, PRINTS A MESSAGE.
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
						default: printf("\nINVALID OPERATION!!!");
						}
					}
					else
						//IF THE OTHER OPERAND ENTERED IS NOT VALID

					{
						printf("\nINAVLID INPUT ENTERED!");
						break;
					}
				}

			}
			else
				//when the operator entered is other than character
			{
				printf("\nINAVLID INPUT ENTERED!!");
				break;
			}
		}
	}
	//if input is other than integer
	else
		printf("\nINVALID INPUT ENTERD!!!");
	scanf_s("%c", &exit);
	getchar();
	return 0;
}
/*
if (scanf("%d", &operand1))
{
	result = operand1;
	while (1)
	{
		if (scanf("%c%d", &operation, &operand2))
		{
			scanf("%c", &operation);
			if (operation == '\n')
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
*/