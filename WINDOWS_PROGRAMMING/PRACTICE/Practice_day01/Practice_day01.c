#include<Windows.h>
#include<stdio.h>
int main()
{
	char a[] = "abcd";
	WCHAR b[] = L"efgh";
	BOOL c;
	c = IsTextUnicode(a, strlen(a), NULL);
	if (c == 1)
		printf("\nARRAY A IS UNICODE");
	else
		printf("\nARRAY IS NOT UNICODE");
	return 0;
}