#include "Pointer.h"
#include <iostream>
using namespace std;

void testPointer();
void testArrPointer();
void testPointer2();
void testPointer3(const int* p);
//����ָ������ָ�룬�Լ�ָ�볣��
int _3main() {
	//testPointer();
	//testArrPointer();
	const int a = 3;
	testPointer3(&a);
	int c = 111;
	//ָ�볣��
	int* const b = &c;
	int d = 9090;
	//b = &d;���ɶ�ָ�볣�����޸ĺͶ��θ�ֵ
	return 0;
}

//ָ������ָ�룬���ɶ�ָ���ֵ���޸�
void testPointer3(const int* p) {
	cout << "*p is " << *p << endl;
}

void testPointer2() {
	int arr[4] = { 23,12,45,90 };
	for (int* p = arr; p < (arr + 4); p++) {
		cout << p << endl;
	}
}

/*��������ָ��*/
void testArrPointer()
{
	//��ϰ���飬ָ�룬�ַ���
	int arr[4] = { 23,12,45,90 };
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		cout << *(arr + i) << endl;
	}
}

void testPointer() {
	//����ָ��
	int a = 10;
	int* pa = &a;
	cout << "pa is " << pa << " *pa is " << *pa << endl;
	int b = 21;
	//������һ��ָ������ָ�룬��ָ��ָ��ĳ������ɱ��޸ģ�ָ���������ɱ��޸�.
	//ע�⼴ʹ�ó���û�м�const�ؼ��֣�Ҳ�ǻᱻ��Ϊ����
	const int* pb = &a;
	cout << "pb is " << pb << " *pb is " << *pb << endl;
	pb = &b;
	cout << "pb is " << pb << " *pb is " << *pb << endl;
	//����ָ�볣������ָ�벻�ɱ��޸ģ�����ָ��ı����ɱ��޸�
	int* const pc = &a;
	cout << "pc is " << pc << " *pc is " << *pc << endl;
	int c = 67;
	*pc = c;
	cout << "pc is " << pc << " *pc is " << *pc << endl;

	const int d = 89;
	const int* pd = &d;
	cout << "pd is " << pd << " *pd is " << *pd << endl;
}