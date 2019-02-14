#include<iostream>
using namespace std;
class point
{
	float x;
	float y;
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
float distance_points(point &a, point &b)
{
	float d;
	d = sqrtf((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
	return d;
}
