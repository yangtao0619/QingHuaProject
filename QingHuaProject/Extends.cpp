#include <iostream>
#include <string>
#include "Extends.h"
using namespace std;

//测试继承，派生类不能继承基类的构造函数和析构函数

//定义父类Fruit
class Fruit {
public:
	string name;
	string color;
public:
	Fruit() { cout << "父类构造函数" << endl; }
	~Fruit() { cout << "父类析构函数" << endl; }
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

//定义自类Apple继承Fruit,public说明继承方式,可以多继承
class Apple :public Fruit, public Plant {
public:
	Apple() {
		setName("Jerry");
		setHeight(23.6f);
	};
	Apple(string name, string color) { cout << "子类构造函数" << endl; };
	~Apple() { cout << "子类析构函数" << endl; };
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
	//非虚函数无法直接调用
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
