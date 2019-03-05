// Question4.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Write a program to open an existing file with CreateFile and use ReadFile to read 
the contents of file till EOF and print the contents to console.*/


#include "pch.h"
#include <iostream>
#include<Windows.h>
#include<tchar.h>
#define max_buffer_size 32767
int main()
{ 
	HANDLE file_handler;
	file_handler = CreateFile(L"SampleFile.txt", GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (INVALID_HANDLE_VALUE == file_handler)
		printf("\nERROR OCCURRED WHILE OPENUNG THE FILE(%d)", GetLastError());
	else
		printf("\nFILE SUCCESSFULLY OPENED");
	char buffer[200] = {"The North Remember."};
	DWORD nbytes_to_read;
	BOOL read_return = ReadFile(file_handler, buffer,200,&nbytes_to_read, NULL);
	if (read_return == 0)
		printf("\nERROR(%d) OCCURRED WHILE READING FROM THE FILE.", GetLastError());
	else
	{
	    wprintf(L"\nFILE READ SUCCESSFULLY.CONTENTS OF THE FILE ARE BELOW.\n%S", buffer);
	}
	CloseHandle(file_handler);
	return 0;
}

