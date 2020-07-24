#include "Client.h"

int Client::clientNumber = 22;
string Client::serverName = "Iflytek";

string Client::getServerName() {
	return Client::serverName;
}

void Client::addClientNumber() {
	Client::clientNumber++;
}