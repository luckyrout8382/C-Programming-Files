//String Function.
#include <stdio.h>
int main(){
	char firstname[30];
	char lastname[30];
																	//enter name in use of string function.
	printf("Enter Your First name: ");
	scanf("%s", firstname);
	
	printf("Enter Your Last name: ");
	scanf("%s", lastname);
	
	printf("Your Short name is--> %c%c",firstname[0], lastname[0]);
	
	
	return 0;
}
