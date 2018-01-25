#include <iostream>
#include <vector>
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
	//vector <Box*> d1;// = new vector<Box>();
	//vector <Box> d2;// = new vector<Box>();

	//Box box1;        // Declare Box1 of type Box
	//box1.i = 5;
	Messager M("Hello, World");
	M.print();

	//printf("register EBP: %x%s\n", getEBP());

	return 0;
}
