#include <iostream>
#include <string>
using namespace std;

//定义类，声明const函数
class Person {
private:
	string food;
	string age;
public:
	void eat();
	void say();
	void sayAll(const int& age);
	~Person() {
		cout << "deconstructor called!" << endl;
	};
};

//类的外部定义函数需要带上类型限定符
void Person::sayAll(const int& age) {
	cout << "my age is " << age << endl;
}

int ___main() {
	Person p;
	const int& age = 23;
	p.sayAll(age);
	return 0;
}