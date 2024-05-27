#include <iostream>
using namespace std;

class Person {
	string name;
public:
	Person(string name);
	string getName() const;
};

Person::Person(string n) : name(n) {}

string Person::getName() const { return name; }

class Student {
	double average;
    string numGroup;
	Person* student;
public:
	Student(Person* st, double av, string ng);
	void info() const;
};

Student::Student(Person* st, double av, string ng) : student(st), average(av), numGroup(ng) {}

void Student::info() const {
	cout << "Name: " << student->getName() << "\nAverage: " << average << "\nNumber of group: " << numGroup << endl;
}

int main() {
	Person person("Semen Domin");
	Student student(&person, 11.5, "P31");
	student.info();
	return 0;
}