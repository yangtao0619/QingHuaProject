#pragma once
#include <string>
#include <iostream>
using namespace std;
class Dog
{
public:
	Dog(int age, string name);
	//����Ĭ�Ϲ��캯����ע��Ĭ�Ϲ��캯�����õ�ʱ���ܼ�����
	Dog();
	//�������ƹ��캯��
	Dog(const Dog& dog);
	//������������
	~Dog();
	void eat(string foodName);
public:
	int age;
	string name;
};

//������������
inline Dog::~Dog() {
	cout << "��������...";
}

//���帴�ƹ��캯��
inline Dog::Dog(const Dog& dog) {
	age = dog.age + 1;
	name = dog.name + "_cp";
}

//����Ĭ�Ϲ��캯��
inline Dog::Dog() {
	this->age = 18;
	this->name = "Jerry";
}

//ʹ�ó�ʼ���б�ķ�ʽ��ʵ�ֹ��캯��
inline Dog::Dog(int age, string name) :age(age), name(name) {}

//.h�ļ���ʵ�ֺ�����ʱ��Ҫ��inline����Ȼ�ᱨ�ظ�����ĺ���
//inline Dog::Dog(int age, string name) {
//	this->age = age;
//	this->name = name;
//}

