#include "messagerDecorator.h"

using namespace std;

MessagerDecorator::MessagerDecorator(Messager messager)
{
	this->messager = messager;
}

void MessagerDecorator::print()
{
	this->messager->print();
}

void MessagerDecorator::print(int i)
{
	this->messager->print(i);
}

void MessagerDecorator::setMessage(string message)
{
	this->messager->setMessage(message);
}
