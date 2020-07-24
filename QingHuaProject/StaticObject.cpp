#include <iostream>
#include <string>
using namespace std;

//�����࣬����const����
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

//����ⲿ���庯����Ҫ���������޶���
void Person::sayAll(const int& age) {
	cout << "my age is " << age << endl;
}

int ___main() {
	Person p;
	const int& age = 23;
	p.sayAll(age);
	return 0;
}