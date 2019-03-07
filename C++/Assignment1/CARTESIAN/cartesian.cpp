/*
Define a point class, where each object represents a point in Cartesian coordinates
(x, y). Define objects of this class and calculate the distance between the 2 points
through a friend function.
*/
#include<iostream>
using namespace std;
class point
{
	float x; //x coordinate
	float y; //y coordinate
public : 
	point()
	{
		cin >> x >> y;
	}
	friend float distance_points(point&, point&); 
};
int main()
{
	int i;
	float dist;
	point p1, p2;
	cout << "ENTER THE CO-ORDINATES OF POINT 1" << endl;
	p1 = point();
	cout << "ENTER THE CO-ORDINATES OF POINT 2" << endl;
	p2 = point();
	dist = distance_points(p1, p2);
	cout << "THE DISTANCE BETWEEN THE TWO POINTS IS " << dist;
	cin >> i;
	return 0;
}
	//calculates the distance between the points
float distance_points(point &a, point &b)
{
	float d;
	d = sqrtf((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
	return d;
}
