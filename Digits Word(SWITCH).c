//Print digits words...
#include <stdio.h>
int main(){
	int n;
	printf("Enter Your Digit(0-5): "); scanf("%d", &n);
	printf("\n");printf("Your Number is: ");
	
	switch (n){
		case 0:printf("Zero"); break;
		case 1:printf("One"); break;
		case 2:printf("Two"); break;
		case 3:printf("Three"); break;
		case 4:printf("Four"); break;
		case 5:printf("Five"); break;
		
		default:printf("Not a valid Number..!");
	}
	return 0;
}
