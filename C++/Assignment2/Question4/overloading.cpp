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
	complx operator+(complx c)
	{
		complx t;
		t.real = real + c.real;
		t.img = img + c.img;
		return t;
	}

};