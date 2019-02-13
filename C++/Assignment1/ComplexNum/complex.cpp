#include<iostream>
using namespace std;
class complex {
	float real;
	float imag;
public :
	complex()
	{
		real = imag = 0;
	}
	complex(float r,float i)
	{
		real = r;
		imag = i;
	}
	complex(float r)
	{
		real = imag = r;
	}
	void input_complex()
	{
		cin >> real >> imag;
	}
	void print_complex()
	{
		cout << "REAL = " << real << endl;
		cout << "IMAGINARY = " << imag << endl;
	}
	void add_complex(complex &a, complex &b)
	{
		real = a.real + b.real;
		imag = a.imag + b.imag;
	}
	void mul_complex(complex &a, complex &b)
	{
		real = a.real*b.real - a.imag*b.imag;
		imag = a.real*b.imag + a.imag*b.real;
	}
};
