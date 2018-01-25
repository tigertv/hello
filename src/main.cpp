#include <iostream>
#include "messager.h" 

using namespace std;

/*
unsigned int getEBP(void)
{
	__asm__("mov eax,ebp");
}
//*/

int main()
{
	Messager M("Hello, World");
	M.print(10);

	//printf("register EBP: %x%s\n", getEBP());

	return 0;
}
