/*
Write a C++ program to add two complex numbers. The class Complex contains
three constructors.
a. One with no parameter.
b. With one parameter(Same value for real and imaginary part)
c. With two parameters.
d. A friend functions
i. One to add two complex number by taking two reference variables of
the class complex.
ii. One to multipy two complex number by taking two reference
variables of class complex
*/
#include<iostream>
using namespace std;
class complex {
	float real;
	float imag;
public :
	friend complex add_complex(complex&, complex&);
	friend complex mul_complex(complex&, complex&);
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
};
complex add_complex(complex &a, complex &b)
{
	complex temp;
	temp.real = a.real + b.real;
	temp.imag = a.imag + b.imag;
	return temp;
}
complex mul_complex(complex &a, complex &b)
{
	complex temp;
	temp.real = a.real*b.real - a.imag*b.imag;
	temp.imag = a.imag*b.real + b.imag*a.real;
	return temp;
}
int main()
{
	int i;
	
	complex c1, c2, sum, prod;
	
	cout << "ENTER THE REAL & IMAGINARY PARTS OF COMPLEX NUMBER 1" << endl;
		//input1
	c1.input_complex();
	
	cout << "ENTER THE REAL & IMAGINARY PARTS OF COMPLEX NUMBER 2" << endl;
		//input2
	c2.input_complex();
	
	cout << "COMPLEX NUMBER 1 : " << endl;
		//printing input1
	c1.print_complex();
	
	cout << "COMPLEX NUMBER 2 : " << endl;
		//printin input2
	c2.print_complex();
	
	cout << "SUM OF THE COMPLEX NUMBERS : " << endl;
		//adding the inputs
	sum = add_complex(c1, c2);
		//printong the sum
	sum.print_complex();
	
	cout << "PRODUCT OF THE COMPLEX NUMBERS : " << endl;
		//multiplying the inputs
	prod = mul_complex(c1, c2);
		//prints the product
	prod.print_complex();
	
	cin >> i;
	
	return 0;
}