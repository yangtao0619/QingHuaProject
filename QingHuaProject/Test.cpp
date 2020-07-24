#include "Client.h"
#include <iostream>
#include "Test.h"
using namespace std;

int _1main() {
	//testArray();
	int arr[3] = { 1,2,3 };
	int* p;
	for (p = arr; p < arr + sizeof(arr) / sizeof(int); ++p) {
		*p += 2;
		std::cout << *p << std::endl;
	}
	for (int e : arr) {
		cout << "e is " << &e << endl;
	}
	//testClient();
	return 0;
}

void testArray()
{
	int stuAge[10];
	cout << "size of stuage is " << sizeof(stuAge) / sizeof(int) << endl;
	for (unsigned int i = 0; i < sizeof(stuAge) / sizeof(int); i++)
	{
		stuAge[i] = pow(2, i);
	}
	for (int i = 0; i < sizeof(stuAge) / sizeof(int); i++)
	{
		cout << "stuAge" << i << " is " << stuAge[i] << endl;
	}
}

void testClient()
{
	Client client;
	string name = client.getServerName();
	cout << "server name is " << name << endl;
	cout << "server clientNumber is " << Client::clientNumber << endl;
	Client::addClientNumber();
	cout << "server clientNumber is " << Client::clientNumber << endl;
}
