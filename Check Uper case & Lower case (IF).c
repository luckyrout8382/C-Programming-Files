//Check entered character is Upper case or Lower case..
#include <stdio.h>
int main (){
	char ch;
	printf("Enter the Character:");
	scanf("%c", &ch);
	if (ch >= 'A' && ch <='Z'){
		printf("THIS CHARACTER IS UPPER CASE \n");
		
	}
	else if (ch >= 'a' && ch <= 'z'){
		printf("this character is lower case \n");
	
	}
	else {
		printf("Entered Character is not a English Letter..!");
	}
	return 0;
}
