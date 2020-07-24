#include <iostream>
#include <string>;
using namespace std;
class Cat;
class Mouse;
class Cat {
public:
	int getAge() { return age; }
	string getName() { return name; }
	friend void printCatInfo(Cat cat);
	void printMouseInfo(Mouse mouse);
	Cat(int age, string name) :age(age), name(name) {
		cout << "Cat start constructor" << endl;
	};
private:
	string name;
	int age;
};

void printCatInfo(Cat cat) {
	cout << "cat's name is " << cat.name << " age is " << cat.age << endl;
}

class Mouse {
	friend class Cat;
public:
	void printMouse();
	Mouse(Cat cat) :cat(cat) {};
private:
	float weight;
	Cat cat;
};
void Cat::printMouseInfo(Mouse mouse) {
	cout << "mouse's weight is " << mouse.weight << endl;
}
void Mouse::printMouse() {
	cout << "I am a mouse";
}



int __main() {
	Cat cat(12, "Tom");
	printCatInfo(cat);
	Mouse m(cat);
	cat.printMouseInfo(m);
	m.printMouse();
	return 0;
}