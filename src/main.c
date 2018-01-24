#include <stdio.h>

char sss[100];

unsigned int getEBP(void)
{
	__asm__("mov eax,ebp");
}

char * s = "abcdef";
char w[23] = "fghjkl";

int main(void)
{
	printf("register EBP: %x%s\n", getEBP());
	printf("Hello, World!!!\n");
	return 0;
}
