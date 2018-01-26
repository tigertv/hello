#ifndef MESSAGER_DECORATOR_H
#define MESSAGER_DECORATOR_H

#include <string>
#include "messagerInterface.h"
#include "messager.h"

using namespace std;

class MessagerDecorator : public MessagerInterface {
	MessagerInterface* messager;
public:
	MessagerDecorator(MessagerInterface* messager);

	void print();
	void print(int times);
	void setMessage(string message);

	void setMessager(MessagerInterface* messager);
};

#endif
