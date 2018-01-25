#include "messagerDecorator.h"
#include <iostream>

using namespace std;

MessagerDecorator::MessagerDecorator(Messager messager)
{
	this->messager = &messager;
}

void MessagerDecorator::print()
{
	cout << "** ";
	this->messager->print();
	//cout << " **";
}

void MessagerDecorator::print(int i)
{
	for(int j=0;j<i;j++) {
		this->print();
	}
}

void MessagerDecorator::setMessage(string message)
{
	this->messager->setMessage(message);
}

void MessagerDecorator::setMessager(Messager messager)
{
	this->messager = &messager;
}
