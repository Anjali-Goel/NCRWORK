#include<stdio.h>
main()
{
	long int sal;
	double gross_sal;
	char exit;
	printf("ENTER YOUR SALARY : ");
	scanf_s("%ld", &sal);
	if (sal > 1 && sal < 4000)
		gross_sal = sal * 1.6;
	else if (sal > 4001 && sal < 8000)
		gross_sal = sal * 1.8;
	else if (sal > 8001 && sal < 12000)
		gross_sal = sal * 19.5;
	else if (sal > 12001)
		gross_sal = sal * 2.1;
	printf("\nGross Salary : %lf", gross_sal);
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &exit);
	getchar();
}