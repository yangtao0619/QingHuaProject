#include "TestVector.h"
#include <vector>
#include <iostream>
using namespace std;

int _11main() {
	vector<int> arr = { 1,2,3 };
	for (int i = 0; i < arr.size(); i++) {
		cout << "i is " << i << " value is " << arr[i] << endl;
	}

	for (auto i = arr.begin(); i != arr.end(); i++) {
		cout << "i is " << *i << endl;
	}
	return 0;
}