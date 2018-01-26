#ifndef MESSAGER_H
#define MESSAGER_H

#include <string>
#include "messagerInterface.h"

using namespace std;

class Messager : public MessagerInterface {
	string message;
public:
	Messager(string message);
	void print();
	void print(int times);
	void setMessage(string message);
	
};

#endif
