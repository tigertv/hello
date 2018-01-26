#include <iostream>
#include "asteriskMessager.h" 
#include "ExclamationMessager.h" 
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
	hello->print(4);

	MessagerInterface *asterisk = new AsteriskMessager(hello);
	asterisk->print(3);
	
	MessagerInterface *exclamation = new ExclamationMessager(hello);
	exclamation->print(3);

	delete(hello);
	delete(asterisk);
	delete(exclamation);

	//printf("register EBP: %x%s\n", getEBP());

	return 0;
}
