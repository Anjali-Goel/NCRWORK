// Question9.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Q.9)  Write a program to create a child process. 
      Use GetCurrentProcessId, GetCurrentThreadId, GetProcessId, GetThreadId, GetProcessIdOfThread to print process
	  and thread information in each of the process.
Q.10) Write a program to create child process which inherits handle of the object (say file object or event object)
      created in the parent process. This can be done via setting SECURITY_ATTRIBUTES structures lpSecurityDescriptor
	  parameter when creating object and CreateProcess’s bInheritHandles parameter when creating child process.
	  Note that child process has no idea of what handles are inherited by it.
*/

#include "pch.h"
#include <iostream>
#include<Windows.h>
#include<tchar.h>

int main(int argc,TCHAR *argl[])
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	ZeroMemory(&si, sizeof(si));
	ZeroMemory(&pi, sizeof(pi));
	HANDLE hfile;
	hfile = CreateFile(L"Text9_10.txt", GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (INVALID_HANDLE_VALUE == hfile)
		printf("\nERROR OCCURRED WHILE OPENUNG THE FILE(%d)", GetLastError());
	else
		printf("\nFILE SUCCESSFULLY OPENED");
	SECURITY_ATTRIBUTES sa;
	sa.nLength = sizeof(sa);
	sa.lpSecurityDescriptor = NULL;
	sa.bInheritHandle = TRUE;
	//CREATION OF CHILD PROCESS-NOTEPAD
	if (0 == CreateProcess(NULL, argl[1], &sa, NULL, TRUE, 0, NULL, NULL, &si, &pi))
	{
		printf("\nERROR(%d) OCCURRED WHILE CREATING THE CHILD PROCESS", GetLastError());
	}
	else
	{
		printf("\nCURRENT PROCESS ID   : %ld", GetCurrentProcessId());
		printf("\nCURRENT THREAD ID    : %ld", GetCurrentThreadId());
		printf("\nPROCESS ID           : %ld", GetProcessId(pi.hProcess));
		printf("\nTHREAD ID            : %ld", GetThreadId(pi.hThread));
		printf("\nPROCESS ID OF THREAD : %ld", GetCurrentProcessId());
		CloseHandle(pi.hProcess);
		CloseHandle(pi.hThread);
	}
	return 1;

}
