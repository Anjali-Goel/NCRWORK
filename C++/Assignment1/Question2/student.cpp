#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class student {
	int marks[3];
	char* name;
	char* grade;
	float avg;
public :
	void set_data()
	{
		char N[100];
		cout << "ENTER THE NAME OF THE STUDENT : ";
		cin >> N;
		int l = strlen(N) + 1;
		name = (char*)malloc(sizeof(char)*l);
		strcpy(name, N);
		cout << "ENTER THE STUDENT'S MARKS : ";
		cin >> marks[0] >> marks[1] >> marks[2];
	}
	float compute_average()
	{
		float avg = (float)(marks[0] + marks[1] + marks[2]) / 3;
		return avg;
	}
	void compute_grade(float avg)
	{
		grade = (char*)malloc(sizeof(char)*13);
		if (avg > 60 && marks[0] > 40 && marks[1] > 40 && marks[2] > 40)
			strcpy(grade,"FIRST CLASS");
		else if (avg > 50 && avg < 60 && marks[0] > 40 && marks[1] > 40 && marks[2] > 40)
			strcpy(grade,"SECOND CLASS");
		else if (avg > 40 && avg < 50 && marks[0] > 40 && marks[1] > 40 && marks[2] > 40)
			strcpy(grade,"THIRD CLASS");
		else if (marks[0] < 40 || marks[1] < 40 || marks[2] < 40)
			strcpy(grade,"FAIL");
		else
			;
	}
	void display()
	{
		cout << "STUDENT PERFORMANCE" << endl;
		cout << "STUDENT NAME : " << name << endl;
		cout << "MARKS :" << endl << marks[0] << endl << marks[1] << endl << marks[2] << endl;
		cout << "GRADE : " << grade;
	}
};
int main()
{
	int i;
	float a;
	student s1;
	s1.set_data();
	a = s1.compute_average();
	s1.compute_grade(a);
	s1.display();
	cin >> i;
	return 0;
}