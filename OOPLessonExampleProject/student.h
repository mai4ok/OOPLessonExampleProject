#pragma once
#include "main.h"

class Student {
private:
	string name;
	string surname;
	int age;
	float avg_mark;

public:
	//default constructor
	Student();

	//default constructor with arguments
	Student(string nm, string surnm, int a, float mark);

	Student(string nm, string surnm);

	// copy constructor
	Student(const Student& student);

	~Student();

	string getName();
	void setName(string n);

	string getSurname();
	void setSurname(string n);

	int getAge();
	void setAge(int a);
	float getAvgMark();
	void setAvgMark(float mark);

	void clear();

	string convert();
};