// practise_day01.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "pch.h"
#include <iostream>
#include<Windows.h>

int main()
{
	int a, b;
	CHAR arr1[] = "abcd";//MULTIBYTE
	WCHAR arr2[] = L"efgh";//UNICODE
	PCHAR wa_array;
	PWCHAR aw_array;
	if (IsTextUnicode(arr1, strlen(arr1), NULL))//CHECKING IF ARRAY 1 IS UNICODE OR ANSI
		printf("ARRAY 1 IS A UNICODE\n");
	else
		printf("ARRAY 1 IS NOT A UNICODE\n");

	if (IsTextUnicode(arr2, wcslen(arr2), NULL))//CHECKING IF ARRAY 2 IS A UNICODE OR ANSI
		printf("ARRAY 2 IS A UNICODE\n");
	else
		printf("ARRAY 2 IS NOT A UNICODE\n");

	//CONVERTING WIDECHAR ARRAY TO MULTIBYTE ARRAY
	a = WideCharToMultiByte(CP_UTF8, 0, arr2, -1, NULL, 0, NULL, NULL);//RETURNS THE LENGTH REQUIRED FOR THE MULTIBYTE ARRAY
	if (0 == a)
		printf("THE EXECUTION TERMINATED WITH AN ERROR(%d)\n", GetLastError());
	else
		printf("REQUIRED LENGTH FOR THE MULTIBYTE STRING IS %d\n",a);
	wa_array = new CHAR[a];
	b= WideCharToMultiByte(CP_UTF8, 0, arr2, -1, wa_array, a, NULL, NULL);
	if (0 == b)
		printf("THE EXECUTION TERMINATED WITH AN ERROR(%d)\n", GetLastError());
	else
	{
		printf("STRING CONVERTED SUCCESSFULLY\n");
		printf("WIDE CHAR TO MULTI-BYTE CONVERTED STRING IS : %s\n", wa_array);
	}

	//CONVERTING MULTI BYTE TO WIDECHAR/UNICODE
	a = MultiByteToWideChar(CP_UTF8, 0, arr1, -1, NULL, 0);//RETURNS THE LENGTH REQUIRED FOR THE MULTIBYTE ARRAY
	if (0 == a)
		printf("THE EXECUTION TERMINATED WITH AN ERROR(%d)\n", GetLastError());
	else
		printf("REQUIRED LENGTH FOR THE WIDE-CHAR STRING IS %d\n", a);
	aw_array = new WCHAR[a];
	b = MultiByteToWideChar(CP_UTF8, 0, arr1, -1, aw_array, a);
	if (0 == b)
		printf("THE EXECUTION TERMINATED WITH AN ERROR(%d)\n", GetLastError());
	else
	{
		printf("STRING CONVERTED SUCCESSFULLY\n");
		printf("MULTIBYTE TO WIDECHAR CONVERTED STRING IS : %S\n", aw_array);
	}
	return 0;
}
