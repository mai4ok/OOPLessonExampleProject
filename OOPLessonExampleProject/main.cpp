#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;
};

void change(Student st) {
	st.name = "no name";
	st.surname = "no name";
	st.age = 0;
	st.avg_mark = 0;
}

int main() {
	Student st1;
	st1.name = "Alex";
	st1.surname = "Ivanov";
	st1.age = 14;
	st1.avg_mark = 10;

	Student st2 = st1;

	cout << "Before" << endl;
	cout << st1.name << endl;
	cout << st1.surname << endl;
	cout << st1.age << endl;
	cout << st1.avg_mark << endl;

	cout << st2.name << endl;
	cout << st2.surname << endl;
	cout << st2.age << endl;
	cout << st2.avg_mark << endl;

	st1.avg_mark = 7;

	cout << "\nAfter" << endl;

	cout << st1.name << endl;
	cout << st1.surname << endl;
	cout << st1.age << endl;
	cout << st1.avg_mark << endl;

	cout << st2.name << endl;
	cout << st2.surname << endl;
	cout << st2.age << endl;
	cout << st2.avg_mark << endl;

	system("pause");
	return 0;
}