//Fgets fuction
#include <stdio.h>
int main(){
	char name[30];
	printf("Enter any word sentences: ");
	fgets(name, 100, stdin);//using fgets to input mylti words input at a time..	 
	puts(name);
	return 0;
}
