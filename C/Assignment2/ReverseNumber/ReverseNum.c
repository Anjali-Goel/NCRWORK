#include<stdio.h>
main()
{
	int num, temp, x, revnum = 0, n = 0;
	char exit;
	printf("ENTER THE NUMBER : ");
	scanf_s("%d", &num);
	temp = num;
	while (temp != 0)
	{
		temp = temp / 10;
		n += 1;
	}
	temp = num;
	while (temp != 0)
	{
		x = temp % 10;
		revnum = revnum * 10 + x;
		temp = temp / 10;
	}
	printf("\nREVERSED NUMBER : %d", revnum);
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &exit);
	getchar();
}