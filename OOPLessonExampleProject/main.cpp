#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	double avr_marks;
};

int main() {
	Student st;

	cout << st.name << endl;
	cout << st.surname << endl;
	cout << st.age << endl;
	cout << st.avr_marks << endl;

	system("pause");
	return 0;
}