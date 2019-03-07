/*
Create a class named student with fields studentName, grade, and marks of three
subjects. Class student contains the following functions:
set_Data(studentName,marks1,marks2,mark3)
Sets student data into the object
calculateAverage():
Compute average student marks
ComputeGrade()
If avg > 60 first class
If 50 < avg < 60 second class
If 40 < avg < 50 third class
Fail if any subject marks are less than 40
display(): prints student details
*/
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
	void free_memory()
	{
		free(name);
		free(grade);
	}
	void set_data()
	{
		char ch;
		int j;
		cout << "ENTER THE NAME OF THE STUDENT : ";
		while (cin >> ch && ch != '\0')
		{
			name =(char*)realloc(name, (i + 2) * sizeof(char));
			*(name + j) = ch;
			*(name + j + 1) = '\0';
			++i;
		}
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
	s1.free_memory();//freeing the memory allocated to name and grade fields 
	cin >> i;
	return 0;
}