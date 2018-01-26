#ifndef MESSAGER_DECORATOR_H
#define MESSAGER_DECORATOR_H

#include <string>
#include "messagerInterface.h"
#include "messager.h"

using namespace std;

class AsteriskDecorator : public MessagerInterface {
	MessagerInterface* messager;
public:
	AsteriskDecorator(MessagerInterface* messager);

	void print();
	void print(int times);
	void setMessage(string message);

	void setMessager(MessagerInterface* messager);
};

#endif
