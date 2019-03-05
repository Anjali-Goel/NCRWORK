// command_lines_day02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<Windows.h>
#include<shellapi.h>

int main()
{
	LPWSTR *arg_list;
	int arg_count;
	arg_list = CommandLineToArgvW(GetCommandLineW(), &arg_count);
	if (NULL == arg_list)
	{
		printf("\nPROGRAM TERMINATED WITH AN ERROR(%d)", GetLastError());
		return 0;
	}
	else
	{
		for (int i = 0; i < arg_count; ++i)
		{
			printf("COMMAND %d : %S\n", i, arg_list[i]);
		}
	}
	LocalFree(arg_list);
	return 1;
}