//Using gets function
#include <stdio.h>
int main(){
	char name[30];
	printf("Enter any word sentences: ");
	gets(name);	//This Function is Dangerous & outdated; 
	puts(name);
	return 0;
}
