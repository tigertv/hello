#include "messagerDecorator.h"
#include <iostream>

using namespace std;

MessagerDecorator::MessagerDecorator(MessagerInterface* messager) {
	this->messager = messager;
}

void MessagerDecorator::print() {
	cout << "*";
	this->messager->print();
	cout << "*";
}

void MessagerDecorator::print(int i) {
	for(int j=0;j<i;j++) {
		this->print();
		cout << endl;
	}
}

void MessagerDecorator::setMessage(string message) {
	this->messager->setMessage(message);
}

void MessagerDecorator::setMessager(MessagerInterface* messager) {
	this->messager = messager;
}
