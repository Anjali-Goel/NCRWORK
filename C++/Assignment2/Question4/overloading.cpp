#include<iostream>
using namespace std;
class complx
{
	int real, img;
public :
	complx()
	{
		real = img = 0;
	}
	complx(int r, int i)
	{
		real = r;
		img = i;
	}
	complx(complx &a)
	{
		real = a.real;
		img = a.img;
	}
	~complx()
	{
		cout << "DESTRUCTOR CALLLED";
	}
	complx operator+(complx c)//complex addition
	{
		complx t;
		t.real = real + c.real;
		t.img = img + c.img;
		return t;
	}
	complx operator-(complx c)//complex numbers subtraction
	{
		complx t;
		t.real = real - c.real;
		t.img = img - c.img;
		return t;
	}
	complx operator-()//negatiion
	{
		complx t;
		t.real = -real;
		t.img = -img;
		return t;
	}
	complx operator++()//pre increment
	{
		++real;
		++img;
		return(*this);
	}
	complx operator++(int x)//post increment
	{
		complx t;
		t.real = real++;
		t.img = img++;
		return t;
	}
	complx operator=(int x)//assignment operation
	{
		complx t;
		t.real = real;
		t.img = img;
		return t;
	}

};