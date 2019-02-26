// practise_day01.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "pch.h"
#include <iostream>
#include<Windows.h>

int main()
{
	int a;
	CHAR arr1[] = "abcd";
	WCHAR arr2[] = L"efgh";
	if (IsTextUnicode(arr1, strlen(arr1), NULL))//CHECKING IF ARRAY 1 IS UNICODE OR ANSI
		printf("ARRAY 1 IS A UNICODE\n");
	else
		printf("ARRAY 1 IS NOT A UNICODE\n");

	if (IsTextUnicode(arr2, wcslen(arr2), NULL))//CHECKING IF ARRAY 2 IS A UNICODE OR ANSI
		printf("ARRAY 2 IS A UNICODE\n");
	else
		printf("ARRAY 2 IS NOT A UNICODE\n");
	
	a = WideCharToMultiByte(CP_UTF8, 0, arr2, wcslen(arr2), NULL, 0, NULL, NULL);

	return 0;
	scanf_s("%d", &a);
}
