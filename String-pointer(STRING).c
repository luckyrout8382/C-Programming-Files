//String Pointer..
#include <stdio.h>
int main(){
	char *hl = "Hello World";
	printf("*hl is: "); // it Reinitialized.
	puts(hl);
	hl="Hello";
	puts(hl);
	puts("\n");
	
	char hi[] = "Hello World";
	printf("hi[] is: "); // it is not Reinitialized.
	puts(hi);
	
	return 0;
}
