/*Write a Program to find if a given number is Armstrong number*/
#include<stdio.h>
int pow(int, int);
main()
{
	int num, temp, leng=0,i,sum=0, x;
	char exit;
	printf("ENTER THE NUMBER\n");
	scanf_s("%d", &num);
	temp = num;
	while (temp != 0)
	{
		temp = temp / 10;
		leng += 1;
	}
	temp = num;
	for (i = 0; i < leng; ++i)
	{
		x = temp % 10;
		sum += pow(x, leng);
		temp = temp / 10;
	}
	if(sum == num)
		printf("\nTHE NUMBER IS A ARMSTRONG NUMBER");
	else
		printf("\nTHE NUMBER IS NOT A ARMSTRONG NUMBER");
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &exit);
	getchar();
}