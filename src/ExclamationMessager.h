#ifndef EXCLAMATION_MESSAGER_H
#define EXCLAMATION_MESSAGER_H

#include <string>
#include "messagerInterface.h"

using namespace std;

class ExclamationMessager : public MessagerInterface {
	MessagerInterface* messager;
public:
	ExclamationMessager(MessagerInterface* messager);

	void print();
	void print(int times);
	void setMessage(string message);

	void setMessager(MessagerInterface* messager);
};

#endif
