#include <iostream>
#include "messagerDecorator.h" 
#include "messager.h" 

using namespace std;

/*
unsigned int getEBP(void)
{
	__asm__("mov eax,ebp");
}
//*/

int main() {

	Messager M("Hello, World");
	M.print(5);

	MessagerDecorator decorM(M);
	decorM.print(5);

	//printf("register EBP: %x%s\n", getEBP());

	return 0;
}
