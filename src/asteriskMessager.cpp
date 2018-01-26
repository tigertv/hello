#include "asteriskMessager.h"
#include <iostream>

using namespace std;

AsteriskDecorator::AsteriskDecorator(MessagerInterface* messager) {
	this->messager = messager;
}

void AsteriskDecorator::print() {
	cout << "*";
	this->messager->print();
	cout << "*";
}

void AsteriskDecorator::print(int i) {
	for(int j=0;j<i;j++) {
		this->print();
		cout << endl;
	}
}

void AsteriskDecorator::setMessage(string message) {
	this->messager->setMessage(message);
}

void AsteriskDecorator::setMessager(MessagerInterface* messager) {
	this->messager = messager;
}
