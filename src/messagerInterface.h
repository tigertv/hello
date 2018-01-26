#ifndef MESSAGER_INTERFACE_H
#define MESSAGER_INTERFACE_H

#include <string>

using namespace std;

class MessagerInterface {
public:
    MessagerInterface(){}
    virtual ~MessagerInterface(){}
	virtual void print() = 0;
	virtual void print(int times) = 0;
	virtual void setMessage(string message) = 0;
};

#endif
