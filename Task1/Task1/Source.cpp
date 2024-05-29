#include <iostream>
using namespace std;

class Person {
	string name;
	int age;
public:
	Person(string n, int a) : name(n), age(a) {}

	string getName() const {
		return name;
	}

	int getAge() const {
		return age;
	}
};

class Student : public Person {
	double average;
    string numGroup;
public:
	Student(string n, int a, double av, string ng) : Person(n, a), average(av), numGroup(ng) {}
	
	void info() const {
		cout << "Student info:\n";
		cout << "Name: " << getName() << "; Age: " << getAge() << "; Average mark: " << average << "; Number of group: " << numGroup << endl;
	}
};

int main() {
	Student student("Semen Domin", 16, 11.5, "P31");
	student.info();
	return 0;
}