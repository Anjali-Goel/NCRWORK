#include<iostream>
using namespace std;
class distance2;
class distance1
{
	int metre;
	int centim;
public :
	void input_d1()
	{
		cout << "ENTER THE DISTANCE IN m-cm : ";
		cin >> metre >> centim;
		if (centim > 100)
		{
			metre += centim / 100;
			centim = centim % 100;
		}
	}
	void display_d1()
	{
		cout << "The distance in m-cm : " << metre << "m " << centim << "cm" << endl;
	}
	friend void add_distances(distance1, distance2);
};
class distance2
{
	int feet;
	int inch;
public : 
	void input_d2()
	{
		cout << "ENTER THE DISTANCE IN f-in : ";
		cin >> feet >> inch;
		if (inch > 12)
		{
			feet = feet + inch / 12;
			inch = inch % 12;
		}
	}
	void display_d2()
	{
		cout << "The distance in f-in : " << feet << "f " << inch << "in" << endl;
	}
	friend void add_distances(distance1, distance2);
};
int main()
{
	int i;
	distance1 p;
	p.input_d1();
	distance2 q;
	q.input_d2();
	add_distances(p, q);
	cin >> i;
	return 0;
}
void add_distances(distance1 d1, distance2 d2)
{
	int op;
	cout << "1-SUM IN METRES-CENTIMETRES" << endl << "2-SUM IN FEET-INCHES" << endl << "ENTER YOUR CHOICE : ";
	cin >> op;
	switch (op)
	{
	case 1: d2.feet *= 0.3048;//converts feet to metres
		d2.inch *= 2.45;//converts inches to centimeters
		d1.metre += d2.feet;
		d1.centim += d2.inch;
		if (d1.centim > 100)//centimetre value is more than 100
		{
			d1.metre = d1.metre + d1.centim / 100;//increment metre value
			d1.centim = d1.centim % 100;//reduce ceentimetre value by 100
		}
		cout << "The sum of the two distances in m-cm : " << d1.metre << "m" << d1.centim << "cm" << endl;
		break;
	case 2: d1.metre *= 3.2808;//converts metres to feet
		d1.centim *= 0.39;//converts centimeters to inches
		d2.feet += d1.metre;
		d2.inch += d1.centim;
		if (d2.inch > 12)//centimetre value is more than 12
		{
			d2.feet = d2.feet + d2.inch / 12;//increment feet value
			d2.inch = d2.inch % 12;//reduce inch value by 12
		}
		cout << "The sum of the two distances in f-in : " << d2.feet << "f" << d2.inch << "in" << endl;
		break;
	default: cout << "!!!INVALID CHOICE!!!" << endl;
	}
}