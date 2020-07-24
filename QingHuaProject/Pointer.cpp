#include "Pointer.h"
#include <iostream>
using namespace std;

void testPointer();
void testArrPointer();
void testPointer2();
void testPointer3(const int* p);
//测试指向常量的指针，以及指针常量
int _3main() {
	//testPointer();
	//testArrPointer();
	const int a = 3;
	testPointer3(&a);
	int c = 111;
	//指针常量
	int* const b = &c;
	int d = 9090;
	//b = &d;不可对指针常量做修改和二次赋值
	return 0;
}

//指向常量的指针，不可对指向的值做修改
void testPointer3(const int* p) {
	cout << "*p is " << *p << endl;
}

void testPointer2() {
	int arr[4] = { 23,12,45,90 };
	for (int* p = arr; p < (arr + 4); p++) {
		cout << p << endl;
	}
}

/*测试数组指针*/
void testArrPointer()
{
	//练习数组，指针，字符串
	int arr[4] = { 23,12,45,90 };
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		cout << *(arr + i) << endl;
	}
}

void testPointer() {
	//定义指针
	int a = 10;
	int* pa = &a;
	cout << "pa is " << pa << " *pa is " << *pa << endl;
	int b = 21;
	//定义了一个指向常量的指针，该指针指向的常量不可被修改，指针变量本身可被修改.
	//注意即使该常量没有加const关键字，也是会被视为常量
	const int* pb = &a;
	cout << "pb is " << pb << " *pb is " << *pb << endl;
	pb = &b;
	cout << "pb is " << pb << " *pb is " << *pb << endl;
	//定义指针常量，该指针不可被修改，但是指向的变量可被修改
	int* const pc = &a;
	cout << "pc is " << pc << " *pc is " << *pc << endl;
	int c = 67;
	*pc = c;
	cout << "pc is " << pc << " *pc is " << *pc << endl;

	const int d = 89;
	const int* pd = &d;
	cout << "pd is " << pd << " *pd is " << *pd << endl;
}