#include "AsteriskWindowMessager.h"
#include <iostream>

using namespace std;

AsteriskWindowMessager::AsteriskWindowMessager(MessagerInterface* messager) {
	this->messager = messager;
}

void AsteriskWindowMessager::print() {
	cout << "¡";
	this->messager->print();
	cout << "ǃ";
}

void AsteriskWindowMessager::print(int i) {
	for(int j=0;j<i;j++) {
		this->print();
		cout << endl;
	}
}

void AsteriskWindowMessager::setMessage(string message) {
	this->messager->setMessage(message);
}

void AsteriskWindowMessager::setMessager(MessagerInterface* messager) {
	this->messager = messager;
}
