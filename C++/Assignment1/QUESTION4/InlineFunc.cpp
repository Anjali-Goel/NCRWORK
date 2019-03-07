/*
Write a C++ program to perform a different arithmetic operation such as addition,
subtraction, division, modulus, and multiplication using an inline function
*/
#include<iostream>
using namespace std;
inline int add(int a,int b)
	{
		return (a + b);
	}
inline int sub(int a,int b)
	{
		return (a - b);
	}
inline long int mul(int a, int b)
	{
		return a * b;
	}
inline int division(int a, int b)
	{
		return a / b;
	}
inline int modulus(int a, int b)
	{
		return a % b;
	}
int main()
{
	int i, j;
	cout << "ENTER THE NUMBERS" << endl;
	cin >> i >> j;
	cout << "SUM OF THE GIVEN NUMBERS IS " << add(i, j) << endl;
	cout << "DIFFERENCE OF THE GIVEN NUMBERS IS " << sub(i, j) << endl;
	cout << "PRODUCT OF THE GIVEN NUMBERS IS " << mul(i, j) << endl;
	cout << "QUOTIENT OF THE GIVEN NUMBERS IS " << division(i, j) << endl;
	cout << "REMAINDER OF THE GIVEN NUMBERS IS " << modulus(i, j) << endl;
	cin >> i;
	return 0;
}