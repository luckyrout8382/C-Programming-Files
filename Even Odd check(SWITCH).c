//Even or Odd check..
#include <stdio.h>
int main(){
	int n;
	printf("Enter your number: "); scanf("%d", &n);
	
	switch(n % 2){
		case 0:printf("It is a Even Number."); break;
		case 1:printf("It is a Odd Number."); break;
		
		default:printf("You Enterd a Wrong value.");
	}
	return 0;
}
