#include<stdio.h>

// warning: no bracket in macro
#define FORMAT_STR "%s"
#define MSG        "Hello World!\n"

int main()
{
	printf(FORMAT_STR, MSG);
	return 0;
}
