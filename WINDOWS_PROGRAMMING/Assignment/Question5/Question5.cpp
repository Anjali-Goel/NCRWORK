// Question5.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* 
Write a program to create a new file with CreateFile and use WriteFile to write text to file.
Verify the written text by manually opening file in notepad/wordpad etc.
*/

#include "pch.h"
#include <iostream>
using namespace std;
#include<Windows.h>
#include<tchar.h>

int _tmain()
{
	HANDLE hfile = NULL;
	hfile = CreateFile(L"Text.txt", GENERIC_WRITE, FILE_SHARE_WRITE, NULL, TRUNCATE_EXISTING, FILE_ATTRIBUTE_NORMAL, hfile);
	if (INVALID_HANDLE_VALUE == hfile)
		printf("\nERROR OCCURRED WHILE OPENUNG THE FILE(%d)", GetLastError());
	else
		printf("\nFILE SUCCESSFULLY OPENED");
	CHAR buffer[300] = { 0 };
	printf("\nENTER THE TEXT YOU WISH WRITE TO THE FILE BELOW.\n");
	cin >> buffer;
	DWORD nBytesWritten;
	BOOL write_return = WriteFile(hfile, buffer, sizeof(buffer), &nBytesWritten, NULL);
	if (0 == write_return)
		printf("\nERROR(%d) OCCURRED WHILE WRITING TO THE FILE!!", GetLastError());
	else
		printf("\nWRITTEN TO FILE SUCCESSFULLY! PLEASE CHECK!");
	CloseHandle(hfile);
	return(0);
}
