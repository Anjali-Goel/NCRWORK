#include<stdio.h>
struct structure
{
	int a;
	char b;
}e;
union uni
{
	int c;
	char d;
}f;
main()
{
	char exit;
	printf("\nSize of Structure and Union, both with one int and one char member");
	printf("\nSize of Structure : %d", sizeof(e));
	printf("\nSize of Union : %d", sizeof(f));
	printf("\nPress Enter to Exit");
	scanf_s("%c", &exit);
	getchar();
}