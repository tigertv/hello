#include <string>
#include "messager.h"

using namespace std;

class MessagerDecorator
{
	Messager messager;
public:
	MessagerDecorator(Messager messager);
	void print();
	void print(int times);
	void setMessage(string message);
};


