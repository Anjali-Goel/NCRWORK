/*Write a C program with a function rotoate_right(n, b).This function rotates integer n
towards right by b positions*/
#include<stdio.h>
int rotate_right(int, int);
int pow(int, int);
main()
{
	int num, rotate_count, newnum;
	char exit;
	printf("ENTER THE INTEGER : ");
	scanf_s("%d", &num);
	printf("\nNUMBER OF ROTATIONS TO RIGHT : ");
	scanf_s("%d", &rotate_count);
	newnum = rotate_right(num, rotate_count);
	printf("\nNUMBER AFTER %d RIGHT ROTATIONS : %d", rotate_count, newnum);
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &exit);
	getchar();
}