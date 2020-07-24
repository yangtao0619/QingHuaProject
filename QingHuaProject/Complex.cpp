#include <iostream>
#include <string>
using namespace std;

//����һ������
int a = 23;
class Complex {

public:
	Complex(double real, double imag) :real(real), imag(imag) {}
	//����������Ӻźͼ���
	Complex operator + (const Complex& c1) const;
	Complex operator - (const Complex& c1) const;
	void display();
private:
	double real;
	double imag;
};
//const���κ�������
//
//���磺void fun0(const A* a); ���� void fun1(const A& a);
//���ú�����ʱ������Ӧ�ı�����ʼ��const���������ں������У�����const���εĲ��ֽ��г�������
//
//����const A* a ���ܶԴ��ݽ�����ָ��ָ��������޸ģ�����ԭָ����ָ������ݣ�
//����const A& a���ܶԴ��ݽ��������ö���������޸ģ�����ԭ���ö����������ݡ�
//
//ע�⣺����constͨ�����ڲ���Ϊָ������õ������
//
//const���κ�������ֵ
//
//���η���ֵ��const����const A fun2(); const A* fun3();
//���������˷���ֵ��const����"����ԭ��"�������Σ������������ص�ָ��ָ������ݻ������õĶ��󲻱��޸ġ�
//
//const���κ���
//const�����ں�������һ������ǣ��ں����������������const���Σ����磺
//A fun4() const;
//���������ǲ����޸ĳ��˺����ֲ������������������κα�����

//����ĺ�����const�Ǳ�ʾ�������ڲ������޸ĳ�Ա�������������Ѿ���mutable���εĳ�Ա����
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