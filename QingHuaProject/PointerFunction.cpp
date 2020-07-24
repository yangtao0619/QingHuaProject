#include "PointerFunction.h"
#include <iostream>
#include "Dog.h"
using namespace std;

int* fun();
int* fun2();


int compute(int a, int b, int (*com)(int, int));
int add1(int a, int b);
int deff(int a, int b);
int devide(int a, int  b);
void testFunPointer();
void testObjPointer();

void testNew();

int _xmain() {
	Dog* dogs = new Dog[2];
	int a = sizeof(*dogs);
	int b = sizeof(Dog);
	for (int i = 0; i < sizeof(*dogs) / sizeof(Dog); i++) {
		cout << " dog is " << (dogs + i)->age << endl;
	}
	delete dogs;
	return 0;
}

void testNew()
{
	Dog* p = new Dog;
	cout << "p->name  is " << p->name << endl;
	delete p;//delete ������ָ�������ͨ��new�����ĵ�ַ
	int a = 23;
	long b = static_cast<long>(a);
}

//ָ������ָ�룬��Ҫʹ��->���Ŵ�ָ��ָ��Ķ�����ȡ����Ա�������߳�Ա����
void testObjPointer() {
	Dog dog(23, "Jany");
	Dog* d = &dog;
	cout << "dog age is " << d->age << " dog name is " << d->name << endl;
}

void testFunPointer() {
	int  x = compute(2, 3, add1);
	cout << "x is " << x << endl;
	x = compute(2, 3, deff);
	cout << "x is " << x << endl;
	x = compute(2, 3, devide);
	cout << "x is " << x << endl;
}

//ָ������ָ�룬һ������ʵ�ֻص�����
//�洢���� ����ֵ���� ��*����ָ�������������б���

int compute(int a, int b, int (*com)(int, int)) {
	return com(a, b);
}

int add1(int a, int b) {
	return a + b;
}
int deff(int a, int b) {
	return a - b;
}
int devide(int a, int b) {
	return a / b;
}
//���ܷ���һ���Ǿ�̬�ֲ������ĵ�ַ���ظ������ߣ������Σ��
int* fun() {
	int a = 3;
	return &a;
}

int* fun2() {
	int* p1 = new int;
	*p1 = 2323;
	return p1;
}