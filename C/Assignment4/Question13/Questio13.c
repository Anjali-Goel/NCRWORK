/*Write a function expand (s1, s2) which expands shorthand notations of s1 like a-d into abcd and 0-9 to 0123456789 in s2. 
For example if the string in s1 is 0123a-e1-4 then s1 is expanded in s2 to 0123abcde1234.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void ExpandShortHand(char*, char*);
int main()
{
	int i = 0, LenStr1 = 0;
	char ch;
	char *Str1='\0',*Str2='\0';
	printf("\nEnter the Short Hand String\n");
		//dynamically taking the string
	while ((scanf_s("%c", &ch)) && ch != '\n')
	{
			//checking if the characters are alphanumeric or '-' only
		if( isdigit(ch) || isalpha(ch) || ch == '-' )
		{
				//reallocates memory everytime characters are entered for the string
			Str1 = realloc(Str1, (i + 2) * sizeof(char));
		    *(Str1 + i) = ch;
		    *(Str1 + i + 1) = '\0';
		    ++i;
		}
			//if any other character is entered 
		else
		{
			printf("\nINVALID CHARACTER USED IN THE STRING!!!\nRestart!");
		}
	}
	//LenStr1 =(int) strlen(Str1);
		//function call to expand the shorthand sequence
	ExpandShortHand(Str1, Str2);
	free(Str1);
	getchar();
	return 1;
}