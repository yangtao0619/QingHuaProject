#pragma once
#include <string>
using namespace std;

class Client {
public:
	static string serverName;
	static int clientNumber;
public:
	string getServerName();
	static void addClientNumber();
};

