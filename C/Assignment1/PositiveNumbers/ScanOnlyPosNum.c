/*Write a C program that accepts integers from the keyboard until we enter a zero or a
negative number. The program will output the number of positive values entered, the
minimum value, the maximum value and the average of all numbers.*/
#include<stdio.h>
main()
{
	int num1, num2, min = 0, max = 0, n = 0, sum = 0;
	float avg = 0;
	char exit;
	printf("ENTER THE NUMBERS : ");
	scanf_s("%d", &num1);
	if (num1 <= 0)
		printf("\n!!!ZERO/NEGATIVE NUMBER ENTERED!!!");
	else
	{
		n = 1;
		sum = num1;
		max = num1;
		while (1)
		{
			scanf_s("%d", &num2);
			if (num2 <= 0)
			{
				printf("\n!!!ZERO/NEGATIVE NUMBER ENTERED!!!");
				break;
			}
			else
			{
				n += 1;
				sum += num2;
				if(num1 > num2)
				{
					max = num1;
					min = num2;
				}
				else
				{
					max = num2;
					min = num1;
				}
				num1 = num2;
			}
		}

	}
	avg = (float)(sum / n);
	printf("\nNUMBER OF TERMS = %d\nMAXIMUM = %d\nMINIMUM = %d\nAVERAGE = %f", n, max, min, avg);
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &exit);
	getchar();
}