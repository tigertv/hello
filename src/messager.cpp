#include "messager.h"
#include <iostream>

using namespace std;

Messager::Messager(string message) {
	this->message = message;
}

void Messager::print() {
	cout << this->message << endl;
}

void Messager::print(int i) {
	// TODO: check input	
	for(int j=0;j<i;j++) {
		this->print();
	}
}

void Messager::setMessage(string message) {
	this->message = message;
}
