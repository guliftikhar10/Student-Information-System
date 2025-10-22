#include"student.h"
//default constructor to set default values for the student
student::student() {
	name = "Unknown";
	age = 0;
	roll_No=0;
	gpa = 0;
	cout << "Default Constructor called!" << endl;
}
//parameterized constructor to set data members using the values given by user
student::student(string n, int a, int r, float c) {
	name = n;
	age = a;
	roll_No = r;
	gpa = c;
	cout << "Parameterized Constructor called  for " << name << endl;
}
//function to update or assign data after object creation
void student::set_Data(string n, int a, int r, float c) {
	name = n;
	age = a;
	roll_No = r;
	gpa = c;
}
//getter methods
string student::Get_name() {
	return name;
}
int student::Get_age() {
	return age;
}
int student::Get_roll_No() {
	return roll_No;
}
float student::Get_gpa() {
	return gpa;
}
//function to display student information
void student::display() {
	cout << " Name :" << name << endl;
	cout << " Age :" << age << endl;
	cout << " Roll No:" << roll_No << endl;
	cout << " GPA :" << gpa << endl;
}
//function to calculate grade based on gpa
void student::calculate_Grade() {
	char grade;
	if (gpa >= 3.8) {
		grade = 'A';
	}
	 else if (gpa >= 3.0) {
		grade = 'B';
	}
	 else if (gpa >= 2.0) {
		grade = 'C';
	}
	 else {
		grade='F';
	}
	cout << " Grade:" << grade << endl;
}
//destructor is automatically called when the object is destroyed
student::~student() {
	cout << "Record of the student " << name << " has been destroyed" << endl;
}