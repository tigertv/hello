#ifndef MESSAGER_DECORATOR_H
#define MESSAGER_DECORATOR_H

#include <string>
#include "messager.h"

using namespace std;

class MessagerDecorator
{
	Messager* messager;
public:
	//MessagerDecorator(Messager messager);
	MessagerDecorator();
	void print();
	void print(int times);
	void setMessage(string message);
	void setMessager(Messager messager);
};

#endif
