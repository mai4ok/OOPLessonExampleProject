#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	double avr_marks;
};

int main() {
	Student st1;
	st1.name = "Alex";
	st1.surname = "Ivanov";
	st1.age = 14;
	st1.avr_marks = 10;

	Student st2 = st1;

	cout << "Before" << endl;
	cout << st1.name << endl;
	cout << st1.surname << endl;
	cout << st1.age << endl;
	cout << st1.avr_marks << endl;

	cout << st2.name << endl;
	cout << st2.surname << endl;
	cout << st2.age << endl;
	cout << st2.avr_marks << endl;

	st1.avr_marks = 7;

	cout << "\nAfter" << endl;

	cout << st1.name << endl;
	cout << st1.surname << endl;
	cout << st1.age << endl;
	cout << st1.avr_marks << endl;

	cout << st2.name << endl;
	cout << st2.surname << endl;
	cout << st2.age << endl;
	cout << st2.avr_marks << endl;

	system("pause");
	return 0;
}