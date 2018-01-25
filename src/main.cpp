#include <iostream>
#include "messager.h" 

using namespace std;

char sss[100];

/*
unsigned int getEBP(void)
{
	__asm__("mov eax,ebp");
}
//*/

string s = "abcdef";
char w[23] = "fghjkl";

int main( )
{
	Messager M("Hello, World");
	M.print(10);

	//printf("register EBP: %x%s\n", getEBP());

	return 0;
}
