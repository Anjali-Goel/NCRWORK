/*Write a program to find whether given number is palindrome or not*/
#include<stdio.h>
main()
{
	int num, x, rnum=0, i, leng=0, temp;
	char exit;
	printf("ENTER THE NUMBER : ");
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
		rnum = rnum * 10 + x;
		temp = temp / 10;
	}
	if (rnum == num)
		printf("\nTHE NUMBER IS A PALINDROME");
	else
		printf("\nTHE NUMBER IS NOT A PALINDROME");
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &exit);
	getchar();
}