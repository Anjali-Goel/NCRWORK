#include<stdio.h>
#include<string.h>
int replace(char* s)
{
	int i, j=0;
	for (i = 0; i < strlen(s); ++i)
	{
		if ((*(s + i)) == " ");
		{
			++j;
			*(s + i) = "-";
		}
	}
	return j;
}