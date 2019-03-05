// Question8.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Create a named event object with CreateEvent. 
Verify the presence of the created event with WinObj
(Hint: Run WinObj as Administrator and Look for event in path similar to: \ > Sessions > * > BaseNamedObjects. * can be integer).
Also verify how kernel object is deleted when no longer used.
*/

#include "pch.h"
#include <iostream>
#include<Windows.h>
#include<tchar.h>

int main()
{
	HANDLE hevent;
	hevent = CreateEvent(NULL, FALSE, FALSE, L"SampleEvent");
	if (NULL == hevent)
		printf("\nERROR(%d) OCCURRED WHILE CREATING THE EVENT", GetLastError());
	else if (ERROR_ALREADY_EXISTS == GetLastError())
		printf("\nTHE NAMED EVENT ALREADY EXISTS!!!");
	else
		printf("\nTHE NAMED EVENT CREATED! PLEASE CHECK!!");
	CloseHandle(hevent);
	getchar();
	return 1;
}
