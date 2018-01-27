#ifndef ASTERISK_WINDOW_MESSAGER_H
#define ASTERISK_WINDOW_MESSAGER_H

#include <string>
#include "messagerInterface.h"

using namespace std;

class AsteriskWindowMessager : public MessagerInterface {
	MessagerInterface* messager;
public:
	AsteriskWindowMessager(MessagerInterface* messager);

	void print();
	void print(int times);
	void setMessage(string message);

	void setMessager(MessagerInterface* messager);
};

#endif
