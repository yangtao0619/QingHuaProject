#pragma once
#include <string>
#include <iostream>
using namespace std;
class Dog
{
public:
	Dog(int age, string name);
	//声明默认构造函数，注意默认构造函数调用的时候不能加括号
	Dog();
	//声明复制构造函数
	Dog(const Dog& dog);
	//声明析构函数
	~Dog();
	void eat(string foodName);
public:
	int age;
	string name;
};

//定义析构函数
inline Dog::~Dog() {
	cout << "正在析构...";
}

//定义复制构造函数
inline Dog::Dog(const Dog& dog) {
	age = dog.age + 1;
	name = dog.name + "_cp";
}

//定义默认构造函数
inline Dog::Dog() {
	this->age = 18;
	this->name = "Jerry";
}

//使用初始化列表的方式来实现构造函数
inline Dog::Dog(int age, string name) :age(age), name(name) {}

//.h文件中实现函数的时候要加inline，不然会报重复定义的函数
//inline Dog::Dog(int age, string name) {
//	this->age = age;
//	this->name = name;
//}

