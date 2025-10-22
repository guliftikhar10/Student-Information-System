#include"student.h"
int main() {
	cout << "         Student Information System         ";//program title
	cout << endl;
	//object s1 using default constructor
	student s1;
	s1.display();
	s1.calculate_Grade();
	cout << endl;
	//object s2,s3,s4 using parameterized constructor 
	student s2("Ali", 20, 19, 3.8);
	s2.display();
	s2.calculate_Grade();
	cout << endl;
	student s3("Faizan", 21, 15, 2.7);
	s3.display();
	s3.calculate_Grade();
	cout << endl;
	student s4("Fatima", 19, 16, 2.3);
	s4.display();
	s4.calculate_Grade();
	cout << endl;

	return 0;
}
