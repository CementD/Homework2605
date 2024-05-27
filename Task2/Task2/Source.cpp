#include <iostream>
using namespace std;

class Fruit {
	string name;
	string color;
public:
	Fruit(string n, string c) : name(n), color(c) {}

	string getName() const { return name; }

	string getColor() const { return color; }
};

class Apple : public Fruit {
public:
	Apple(string c) : Fruit("apple", c) {}
};

class Banana : public Fruit {
public:
	Banana() : Fruit("banana", "yellow") {}
};

int main() {
	Apple a("red");
	Banana b;
	cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
}

