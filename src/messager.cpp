#include "messager.h"

#include <iostream>

using namespace std;

Messager::Messager(string message)
{
	this->message = message;
}

void Messager::print()
{
	for(int i=0;i<10;i++) {
		cout << this->message << endl;
	}
}

void Messager::setMessage(string message)
{
	this->message = message;
}
