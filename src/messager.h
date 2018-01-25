#ifndef MESSAGER_H
#define MESSAGER_H

#include <string>

using namespace std;

class Messager {
	string message;
public:
	Messager(string message);
	void print();
	void print(int times);
	void setMessage(string message);
	
};

#endif
