//Calculator..
#include <stdio.h>
int main(){
	int a, b;
	char sign;
	printf("Enter 1st Number: "); scanf("%d", &a);
	printf("Enter 2nd Number: "); scanf("%d", &b); printf("\n");
	
	printf("{+, -, *, /}"); printf("\n");
	printf("Enter Operator--> "); scanf(" %c", &sign); printf("\n");
	
	switch(sign){
		case '+':printf("Additon of this two number is--> %ld", a+b); break;
		case '-':printf("Substarction of this two number is--> %d", a-b); break;
		case '*':printf("Multiplication of this two number is--> %d", a*b); break;
		case '/':printf("Division of this two number is--> %d", a/b); break;
		
		default: printf("Error, Wrong Input.!");
	}
	return 0;
}
