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
	}
	polar(float r, float a)
	{
		radius = r;
		angle = a;
		++count;
	}

};