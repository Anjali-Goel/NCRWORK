#include<iostream>
using namespace std;
class polar
{
	float radius, angle;
public : 
	static int count;
	polar()
	{
		radius = angle = 0;
		++count;
	}
	polar(float r, float a)
	{
		radius = r;
		angle = a;
		++count;
	}
};
int polar::count;
int main()
{
	float r, a;
	polar p1;
	polar::count = 0;
	cout << "Enter the radius and angle : ";
	cin >> r >> a;
	p1 = polar(r, a);
	polar p2 = polar();
	cout << "The Number of objects created under the class POLAR are "<<polar::count;
	cin >> r;
	return 0;
}