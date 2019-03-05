// Question6.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Q.6) Write a program to create a process using CreateProcess API. 
Child process can be any your previously implemented programs.
Q.7) Write a program which uses the CreateProcess API to create two child processes (say calc.exe and notepad.exe).
Print HANDLE value and process ID of each child process.
*/

#include "pch.h"
#include <iostream>
#include<Windows.h>
#include<tchar.h>

int _tmain(int argc,TCHAR *argl[])
{
	STARTUPINFO si1, si2;
	PROCESS_INFORMATION pi1, pi2;
	//CREATION OF CHILD PROCESS 1-CALCULATOR APPLICATION
	ZeroMemory(&si1, sizeof(si1));
	ZeroMemory(&pi1, sizeof(pi1));
	if (0 == CreateProcess(NULL, argl[1], NULL, NULL, FALSE, 0, NULL, NULL, &si1, &pi1))
	{
		printf("\nERROR(%d) OCCURRED WHILE CREATING THE CHILD PROCESS", GetLastError());
	}
	else
	{
		printf("\nCREATED CHILD PROCESS-CALCULATOR APPLICATION");
		printf("\nHANDLE ID : %ld", (pi1.hProcess));
		printf("\nPROCESS ID : %ld", (pi1.dwProcessId));
		printf("\nTHREAD ID : %ld", (pi1.dwThreadId));
		CloseHandle(pi1.hProcess);
		CloseHandle(pi1.hThread);
	}
	//CREATION OF CHILD PROCESS2-NOTEPAD
	ZeroMemory(&si2, sizeof(si2));
	ZeroMemory(&pi2, sizeof(pi2));
	if (0 == CreateProcess(NULL, argl[2], NULL, NULL, FALSE, 0, NULL, NULL, &si2, &pi2))
	{
		printf("\nERROR(%d) OCCURRED WHILE CREATING THE CHILD PROCESS", GetLastError());
	}
	else
	{
		printf("\nCREATED CHILD PROCESS-NOTEPAD");
		printf("\nHANDLE ID : %ld", (pi2.hProcess));
		printf("\nPROCESS ID : %ld", (pi2.dwProcessId));
		printf("\nTHREAD ID : %ld", (pi2.dwThreadId));
		CloseHandle(pi2.hProcess);
		CloseHandle(pi2.hThread);
	}
	return 1;
}