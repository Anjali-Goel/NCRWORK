#include<iostream>
using namespace std;
class time {
	int hours;
	int minutes;
	int seconds;
public :
	time()
	{
		hours = minutes = seconds = 0;
	}
	time(int h, int m, int s)
	{
		hours = h;
		minutes = m;
		seconds = s;
	}
	void display_time()
	{
		cout << "Time : " << hours << ":" << minutes << ":" << seconds << endl;
	}
	void add_time(time &a, time &b)
	{
		hours = a.hours + b.hours;
		minutes = a.minutes + b.minutes;
		seconds = a.seconds + b.seconds;
		if (seconds > 60)
		{
			++minutes;
			seconds = seconds - 60;
		}
		if (minutes > 60)
		{
			++hours;
			minutes = minutes - 60;
		}
		if (hours > 24)
			hours = hours - 24;
	}
};
void main()
{
	char a;
	time t1, t2, t3;
	t1 = time(1, 2, 3);
	t1.display_time();
	t2 = time(4, 5, 6);
	t2.display_time();
	t3.add_time(t1, t2);
	t3.display_time();
	cin >> a;
}