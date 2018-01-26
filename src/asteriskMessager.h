#ifndef MESSAGER_DECORATOR_H
#define MESSAGER_DECORATOR_H

#include <string>
#include "messagerInterface.h"

using namespace std;

class AsteriskMessager : public MessagerInterface {
	MessagerInterface* messager;
public:
	AsteriskMessager(MessagerInterface* messager);

	void print();
	void print(int times);
	void setMessage(string message);

	void setMessager(MessagerInterface* messager);
};

#endif
