//Positive & Negetive Number..
#include <stdio.h>
int main(){
	int n;
	printf("Check Your Number is Posstitive or Negetive.\n"); printf("Enter Your Number: "); scanf("%d", &n);
	
	switch(n > 0){									//Switch inside Switch..
		case 1:printf("Positive Number."); break;
		case 0: switch(n < 0){
			case 1:printf("Negetive Number.");break;
			case 0: printf(" !Wrong! ");
		}
	}
	return 0;
}
