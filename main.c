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
	printf("CPU: %x%s\n", getEBP());
	return 0;
}
