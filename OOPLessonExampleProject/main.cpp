#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;

	Student() {
		name = "No Name";
		surname = "No Surname";
		age = 15;
		avg_mark = 4;
	}
	~Student() {
		cout << "Destructure" << endl;
	}
	//êîíîíè÷åñêèé êîíñòðóêòîð
	Student(string nm, string surnm, int ag, float avg) {
		name = nm;
		surname = surnm;
		age = ag;
		avg_mark = avg;
	}
	Student(string nm, string surnm) {
		name = nm;
		surname = surnm;
	}


	void clear() {
		name = "No Name";
		surname = "No Surname";
		age = 0;
		avg_mark = 0;
	}
	//copy constructor
	Student(const Student& st) {
		name = st.name;
		surname = st.surname;
		age = st.age;
		avg_mark = st.avg_mark;
	}
	string convert() {
		string msg = "";
		msg += name + " " + surname + " age: " + to_string(age) + " avg mark: " + to_string(avg_mark);
		return msg;
	}
	Student test() {
		Student st;
		st.name = "Alex";
		return st;
	}
};


int main() {
	Student st1("Ivan", "Ivanov", 18, 8);
	//Student st2(st1);
	Student st = test();

	return 0;
}