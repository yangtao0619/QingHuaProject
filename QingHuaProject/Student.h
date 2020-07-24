#pragma once
class Student
{
private:
	char* name;
	int* age;
	char* address;
public:
	Student(char* name, int* age, char* address) :name(name), age(age), address(address) {}
	int getAge() {
		return *age;
	};
	char* getName() {
		return name;
	}
	void setName(char* name) {
		this->name = name;
	}
};
