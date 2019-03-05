// Question3.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Write a program to print environment variables passed to the console application. 
Also demonstrate the usage of ExpandEnvironmentStrings API.*/

#include "pch.h"
#include <iostream>
#include<Windows.h>
#include<shellapi.h>
int main()
{
	TCHAR buffer_path[32767], buffer_temp[32767], buffer_tmp[32767];
	int count_path, count_temp, count_tmp;
	//ENVIRONMENT VARIABLE PATH
	count_path = ExpandEnvironmentStrings(L"%Path%", buffer_path, 32767);
	//CHECKS IF BUFFER SIZE IS MORE THAN 32K
	if (count_path > 32767)
		printf("\nBUFFER SIZE FOR PATH-BUFFER IS MORE THAN THE LIMITED SIZE(32K)!!!");
	//CHECKS FOR ERROR
	else if (NULL == count_path)
		printf("\nPROGRAM TERMITAED WITH ERROR(%d)", GetLastError());
	//IF NO ERROR OCCURRED PRINTS THE STRING
	else
		wprintf(L"\nENVIRONMENT VARIABLE PATH : %S",buffer_path);
	//ENVIRONMENT VARIABLE TEMP
	count_temp = ExpandEnvironmentStrings(L"%TEMP%", buffer_temp, 32767);
	//CHECKS IS SIZE > 32K
	if (count_temp > 32767)
		printf("\nBUFFER SIZE FOR TEMP-BUFFER IS MORE THAN THE LIMITED SIZE(32K)!!!");
	//CHECKS FOR ERROR
	else if (NULL == count_temp)
		printf("\nPROGRAM TERMITAED WITH ERROR(%d)", GetLastError());
	//PRINTS THE VARIABLE STRING IF NO ERROR
	else
		wprintf(L"\nENVIRONMENT VARIABLE TEMP : %S", buffer_temp);
	//ENVIRONMENT VARIABLE TMP
	count_tmp = ExpandEnvironmentStrings(L"%TMP%", buffer_tmp, 32767);
	//CHECKS IF SIZE > 32K
	if (count_tmp > 32767)
		printf("\nBUFFER SIZE FOR TMP-BUFFER IS MORE THAN THE LIMITED SIZE(32K)!!!");
	//CHECKS FOR ERROR
	else if (NULL == count_tmp)
		printf("\nPROGRAM TERMITAED WITH ERROR(%d)", GetLastError());
	//PRINTS THE VARIABLE STRING IF NO ERROR
	else
		wprintf(L"\nENVIRONMENT VARIABLE TMP : %S", buffer_tmp);

}
