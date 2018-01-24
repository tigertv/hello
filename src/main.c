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

	for(int i=0;i<10;i++) {
		printf("Hello, World!!!\n");
	}

	return 0;
}
