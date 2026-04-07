//price calculator with for-1..
#include <stdio.h>

int main(){
	float price[3];
	printf("Enter Your 1st item price:");
	scanf("%f", &price[0]);
	printf("Enter Your 2nd item price:");
	scanf("%f", &price[1]);
	printf("Enter Your 3rd item price:");
	scanf("%f", &price[2]);
	
	int i;
	for(i=0;i<=3;i++){
		printf("Total Price:%f\n", price[i]+0.18*price[i]);
	}	
	
	return 0;
}

