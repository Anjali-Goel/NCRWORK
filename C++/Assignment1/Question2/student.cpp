#include<iostream>
using namespace std;
class student {
	char* name;
	int marks1;
	int marks2;
	int marks3;
	float avg;
public :
	void set_data()
	{
		char N[50];
		cout << "ENTER THE NAME OF THE STUDENT : ";
		cin >> N;
		name = new char;
		cout << "ENTER THE STUDENT'S MARKS : ";
		cin >> marks1 >> marks2 >> marks3;
	}
	void compute_average()
	{
		float avg = (marks1 + marks2 + marks3) / 3;
		cout << "AVERAGE MARKS OF THE STUDENT : " << avg << endl;
	}
	void compute_grade()
	{
		if (avg > 60)
			cout << "THE STUDENT PASSED WITH FIRST CLASS:D:D" << endl;
		else if (avg > 50 && avg < 60)
			cout << "THE STUDENT PASSED WTH SECOND CLASS:D" << endl;
		else if (avg > 40 && avg < 50)
			cout << "THE STUDENT PASSED WITH THIRD CLASS:)" << endl;
		else if (avg < 40)
			cout << "THE STUDENT HAS FAILED :(" << endl;
		else
			;
	}
};
int main()
{
	int i;
	student s1;
	s1.set_data();
	s1.compute_average();
	s1.compute_grade();
	cin >> i;
	return 0;
}