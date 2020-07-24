// QingHuaProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#include <iostream>
using namespace std;
#include <cmath>;
#include "Dog.h"

int sum();
const float PI(3.14);

void calcArea();

int castNumber();
double power(double x, int n);
double arctanx(double x);
void getPi();
//给出默认值的参数
int add(int x, int y = 4);
void getAngleData();

void testCpCon();

void testDestructor();

//int main() {
//	//getAngleData();
//	//testCpCon();
//	testDestructor();
//	return 0;
//}
/*测试析构函数*/
void testDestructor()
{
	Dog dogs[3] = { Dog(),Dog() };
	Dog dog;
	dog.~Dog();
}
/*
测试复制构造函数*/
void testCpCon() {
	Dog dog;
	//Dog dog(1, "tom");
	cout << "dog's name is " << dog.name << " dog's age is " << dog.age << endl;
	Dog dogCp(dog);
	cout << "dogCp's name is " << dogCp.name << " dogCp's age is " << dogCp.age << endl;
}

/*
使用系统函数求一个角度的正弦，余弦和正切
*/
void getAngleData() {
	while (true) {
		cout << " please enter an angle:" << endl;
		double angle = 0.0;
		cin >> angle;
		double hu = angle * PI / 180;
		double sinx = sin(hu);
		double cosx = cos(hu);
		double tanx = tan(hu);
		cout << "sinx is " << sinx << " cons is " << cosx << " tanx is " << tanx << endl;
	}
}

int add(int x, int y) {
	return x + y;
}

/*
求圆周率PI
PI = 16arctan(1/5) - 4arctan(1/239)
*/
void getPi() {
	double x = 16 * arctanx(1 / 5.0);
	double y = 4 * arctanx(1 / 239.0);
	double pi = x - y;
	cout << " result is " << pi << endl;
}
/*
arctan x = x - x^3/3 + x^5/5 - x^7 / 7 + ...
最后一项不大于10e-15
*/
double arctanx(double x) {
	double sum = 0;
	double n = 0.0;
	for (int i = 0; ; i++) {
		n = power(x, 2 * i + 1);
		if (n < 1e-15) {
			cout << "break n is " << n;
			break;
		}
		sum += n * (i % 2 == 1 ? -1 : 1) / (2 * i + 1);
	}
	cout << "artan " << x << " is " << sum << endl;
	return sum;
}

/*
计算从键盘输入的8位二进制，转换成十进制的结果
*/
int castNumber() {
	cout << "请输入任意的8位二进制数：" << endl;
	int sum = 0;
	for (int i = 7; i >= 0; i--)
	{
		char in = -1;
		cin >> in;
		if ('1' == in) {
			sum += static_cast<int>(power(2, i));
		}
	}
	cout << "sum is " << sum << endl;
	return sum;
}

/*
计算x的n次方
*/
double power(double x, int n) {
	if (n < 0) {
		cout << "n is invalid";
	}
	double ji = 1;
	for (int i = 0; i < n; i++) {
		ji *= x;
	}
	return ji;
}

int sum() {
	unsigned int sum = 0;
	unsigned int i = 0;
	do {
		sum += i;
		i++;
	} while (i <= 10);
	return sum;
}
/*
根据用户输入的图形类型提示用户输入数据
*/
void calcArea() {
	for (;;) {
		cout << "请输入图形类型（1-圆形，2-长方形，3-正方形）" << endl;
		int shapeType = 0;
		cin >> shapeType; float area;
		int r = 0;
		float length, width;
		float l;
		switch (shapeType) {
		case 1:
			cout << "请输入圆形的半径：" << endl;
			cin >> r;
			area = PI * r * r;
			cout << "您输入的半径为 " << r << " 圆形的面积为 " << area << endl;
			break;
		case 2:
			cout << "请输入长方形的长和宽：" << endl;
			cin >> length;
			cin >> width;
			area = length * width;
			cout << "您输入的长方形面积为：" << area << endl;
			break;
		case 3:
			cout << "请输入正方形的边长：" << endl;
			cin >> l;
			area = l * l;
			cout << "您输入的正方形面积为：" << area << endl;
			break;
		}
	}

}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
