#include "main.h"

class Student {
public:
    string name;
    string surname;
    int age;
    float avg_marks;

    //default constructor
    Student() {
        name = "no name";
        surname = "no surname";
        age = 15;
        avg_marks = 4;
    }

    //constructor with arguments
    Student(string nm, string surnm, int a, int marks) {
        name = nm;
        surname = surnm;
        age = a;
        avg_marks = marks;
    }

    //copy-constructor
    Student(Student& student) {
        name = student.name;
        surname = student.surname;
        age = student.age;
        avg_marks = student.avg_marks;
    }

    ~Student() {

    }

    void clear() {
        name = "no name";
        surname = "no surname";
        age = 0;
        avg_marks = 0;
    }

    string convert() {
        string msg = "";
        msg += name;
        msg += " " + surname;
        msg += " (age = " + to_string(age);
        msg += ", averege mark = " + to_string(avg_marks) + ")";
        return msg;
    }
};

int main() {
    //Student st1;              //calling default-constructor
    Student st2("Ivan", "Ivanov", 14, 10);  //calling constructos witth args
    Student st3(st2);            //calling copy-constructot

    //st1.name = "Alex";
    //st1.surname = "Ivanov";
    //st1.age = 14;
    //st1.avg_marks = 10;

    //cout << "Before: " << endl;
    //cout << st1.convert() << endl;

    //st1.clear();

    //cout << "\nAefore: " << endl;
    //cout << st1.convert() << endl;

    system("pause");
    return 0;
}