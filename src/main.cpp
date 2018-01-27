#include <iostream>
#include "asteriskMessager.h" 
#include "ExclamationMessager.h" 
#include "AsteriskWindowMessager.h" 
#include "messager.h" 

using namespace std;

/*
unsigned int getEBP(void)
{
	__asm__("mov eax,ebp");
}
//*/

int main() {

	MessagerInterface *hello = new Messager("Hello, World");
	MessagerInterface *asterisk3 = new AsteriskWindowMessager(hello);

	asterisk3->print(1);
	hello->print(2);

	MessagerInterface *asterisk = new AsteriskMessager(hello);
	asterisk->print(2);
	
	MessagerInterface *exclamation = new ExclamationMessager(hello);
	exclamation->print(2);

	MessagerInterface *exclamation2 = new ExclamationMessager(asterisk);
	exclamation2->print(2);

	MessagerInterface *asterisk2 = new AsteriskMessager(exclamation);
	asterisk2->print(2);


	delete(hello);
	delete(asterisk);
	delete(asterisk2);
	delete(asterisk3);
	delete(exclamation);
	delete(exclamation2);

	//printf("register EBP: %x%s\n", getEBP());

	return 0;
}
