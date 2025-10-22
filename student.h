#include<iostream>
using namespace std;
class student {
private:
	string name;
	int age;
	int roll_No;
	float gpa;
public:
	student ();//default constructor
	student(string n, int a, int r, float c);//parameterized constructor
	//function to set data all at once 
	void set_Data(string n, int a, int r, float c);
	//getter methods (encapsulation)
	string Get_name();
	int Get_age();
	int Get_roll_No();
	float Get_gpa();
	//Display and calculation of grade(Abstraction)
	void display();
	void calculate_Grade();
	~student();//Destructor
};

