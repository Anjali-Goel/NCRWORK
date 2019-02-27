/*A decimal number between 0 and 32 exclusive can be expressed in binary system as
x4x3x2x1x0, where xi ’s are either zero or one. Write a C program that accepts (from
the terminal) a decimal number in the above range and prints out the equivalent binary
representation with leading bit 1.*/
#include<stdio.h>
main()
{
	int a, i;
	int x[5];//ARRAY OF 5 ELEMENTS TO STORE THE 5-BIT BINARY VALUE
	char exit;
	printf("ENTER A NUMBER BETWEEN 0-31 : ");
	scanf_s("%d", &a);
	for (i = 0; i < 5; ++i)//CONVERSION OF DECIMAL TO BINARY
	{
		x[i] = a % 2;
		a = a / 2;
	}
	x[4] = 1;
	for (i = 4; i >=0; --i)
		printf("%d", x[i]);
    printf("\nPRESS ANY KEY TO EXIT");
	scanf_s("%c", &exit);
	getchar();
}