#include <iostream>
#include <string>
using namespace std;

//定义一个复数
int a = 23;
class Complex {

public:
	Complex(double real, double imag) :real(real), imag(imag) {}
	//重载运算符加号和减号
	Complex operator + (const Complex& c1) const;
	Complex operator - (const Complex& c1) const;
	void display();
private:
	double real;
	double imag;
};
//const修饰函数参数
//
//比如：void fun0(const A* a); 或则 void fun1(const A& a);
//调用函数的时候用相应的变量初始化const常量，则在函数体中，按照const修饰的部分进行常量化。
//
//比如const A* a 则不能对传递进来的指针指向的内容修改，保护原指针所指向的内容；
//比如const A& a则不能对传递进来的引用对象的内容修改，保护原引用对象所的内容。
//
//注意：参数const通常用于参数为指针或引用的情况。
//
//const修饰函数返回值
//
//修饰返回值的const，如const A fun2(); const A* fun3();
//这样声明了返回值后，const按照"修饰原则"进行修饰，保护函数返回的指针指向的内容或则引用的对象不被修改。
//
//const修饰函数
//const作用于函数还有一种情况是，在函数定义的最后面加上const修饰，比如：
//A fun4() const;
//其意义上是不能修改除了函数局部变量以外的所在类的任何变量。

//这里的函数后部const是表示，函数内部不能修改成员变量，除非是已经被mutable修饰的成员变量
Complex Complex::operator + (const Complex& c1) const {
	return Complex(real + c1.real, imag + c1.imag);
}
Complex Complex::operator - (const Complex& c1) const {
	return Complex(real - c1.real, imag - c1.imag);
}

void Complex::display() {
	cout << "real is " << real << " imag is " << imag << endl;
}

int main() {
	Complex c(4, 5);
	Complex c2(1, 2);
	c.display();
	c2.display();
	Complex c3 = c + c2;
	c3.display();
	Complex c4 = c - c2;
	c4.display();
	cout << a << endl;
}