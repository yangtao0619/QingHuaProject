#include "Student.h"
#include <string>
#include <iostream>
using namespace std;

int _3_main() {
	string name = "jerry";
	int age = 223;
	string address = "Hefei";
	Student student("Jerry", &age, "Hefei");
	cout << student.getName() << endl;
	student.setName("Zhangsan");
	cout << student.getName() << endl;
	return 0;
}
