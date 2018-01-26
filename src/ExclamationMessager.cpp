#include "ExclamationMessager.h"
#include <iostream>

using namespace std;

ExclamationMessager::ExclamationMessager(MessagerInterface* messager) {
	this->messager = messager;
}

void ExclamationMessager::print() {
	cout << "¡";
	this->messager->print();
	cout << "ǃ";
}

void ExclamationMessager::print(int i) {
	for(int j=0;j<i;j++) {
		this->print();
		cout << endl;
	}
}

void ExclamationMessager::setMessage(string message) {
	this->messager->setMessage(message);
}

void ExclamationMessager::setMessager(MessagerInterface* messager) {
	this->messager = messager;
}
