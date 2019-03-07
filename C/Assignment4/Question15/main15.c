/*Implement string library functions. strrev, strcpy, strcat, strcmp with same return values and 
all error handling features, using pointers.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char ch;
	char *Str1 = '\0', *Str2 = '\0';
	int i = 0, LStr1 = 0, LStr2 = 0;
	printf("\nENTER THE INPUT STRING\n");
	while ((scanf("%c", &ch) && ch != '\n'))
	{
		Str1 = realloc(Str1, (i + 2)*(sizeof(char)));
		*(Str1 + i) = ch;
		*(Str1 + i + 1) = '\0';
		++i;
	}
	LStr1 = strlen(Str1);
	printf("")
}