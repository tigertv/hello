#include "asteriskMessager.h"
#include <iostream>

using namespace std;

AsteriskMessager::AsteriskMessager(MessagerInterface* messager) {
	this->messager = messager;
}

void AsteriskMessager::print() {
	cout << "*";
	this->messager->print();
	cout << "*";
}

void AsteriskMessager::print(int i) {
	for(int j=0;j<i;j++) {
		this->print();
		cout << endl;
	}
}

void AsteriskMessager::setMessage(string message) {
	this->messager->setMessage(message);
}

void AsteriskMessager::setMessager(MessagerInterface* messager) {
	this->messager = messager;
}
