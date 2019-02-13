#include<time.h>
#include<stdio.h>
struct time
{
	int hour;
	int minutes;
	int seconds;
}timenow;
main()
{
	char e;
	time_t now;
	time(now);
	printf("\nTIME : %s", ctime_s(now));
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &e);
	getchar();
}