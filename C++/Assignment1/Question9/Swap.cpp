#include<iostream>
using namespace std;
class swapp {
	int num1;
	int num2;
public :
	swapp()
	{
		num1 = num2 = 0;
	}
	swapp(int n1,int n2)
	{
		num1 = n1;
		num2 = n2;
	}
	void display()
	{
		cout << "NUMBER 1 = " << num1 << " NUMBER 2 = " << num2 << endl;
	}
	void swap_value(swapp a)
	{
		num1 = a.num2;
		num2 = a.num1;
	}
	void swap_reference(swapp &b)
	{
		num1 = b.num2;
		num2 = b.num1;
	}
};
int main()
{
	int i;
	char exit;
	swapp c,d;
	c = swapp(20, 40);
	cout << "NUMBERS BEFORE SWAPPING" << endl;
	c.display();
	cout << "ENTER 1 FOR SWAPPING BY VALUE OR 2 FOR SWAPPPING BY REFERENCE : ";
	cin >> i;
	switch (i)
	{
	case 1: d.swap_value(c);
		    break;
	case 2: d.swap_reference(c);
		    break;
	default: cout << "\n!!!INVALID ISNPUT!!!" << endl;
	}
	cout << "NUMBERS AFTER SWAPPING" << endl;
	d.display();
	cin >> exit;
	return 0;
}