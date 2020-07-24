#include <iostream>
#include <string>
#include "Extends.h"
using namespace std;

//���Լ̳У������಻�ܼ̳л���Ĺ��캯������������

//���常��Fruit
class Fruit {
public:
	string name;
	string color;
public:
	Fruit() { cout << "���๹�캯��" << endl; }
	~Fruit() { cout << "������������" << endl; }
	string getName() { return name; }
	void setName(string name) { this->name = name; }
	string getColor() { return color; }
};

class Plant {
private:
	float height;
public:
	float getHeight() { return height; }
	void setHeight(float height) { this->height = height; }
};

//��������Apple�̳�Fruit,public˵���̳з�ʽ,���Զ�̳�
class Apple :public Fruit, public Plant {
public:
	Apple() {
		setName("Jerry");
		setHeight(23.6f);
	};
	Apple(string name, string color) { cout << "���๹�캯��" << endl; };
	~Apple() { cout << "������������" << endl; };
};

class Base {
public:
	void display() { cout << "Base calss display!" << endl; }
};

class Base1 : public Base {
public:
	void display() { cout << "Base1 calss display!" << endl; }
};
class Base2 : public Base {
public:
	void display() { cout << "Base2 calss display!" << endl; }
};

void displayShow(Base* base) { base->display(); }

class Animal {
public:
	Animal() { cout << "constrctor called!" << endl; }
	~Animal() { cout << "destructor called!" << endl; };
};

int _12main() {
	//showApple();
	Base b;
	Base1 b1;
	Base2 b2;
	//���麯���޷�ֱ�ӵ���
	displayShow(&b);
	displayShow(&b1);
	displayShow(&b2);
	return  0;
}

void showApple()
{
	Apple a;
	cout << "name is " << a.getName() << endl;
	float height = a.getHeight();
	cout << "height is " << height << endl;
}
