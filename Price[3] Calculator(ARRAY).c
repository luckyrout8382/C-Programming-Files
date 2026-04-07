//normal price calculator..
#include <stdio.h>

int main(){
	float price[3];
	printf("Enter Your 1st item price:");
	scanf("%f", &price[0]);
	printf("Enter Your 2nd item price:");
	scanf("%f", &price[1]);
	printf("Enter Your 3rd item price:");
	scanf("%f", &price[2]);
	
	printf("1st item price with GST is:%f\n", price[0]+0.18*price[0]);
	printf("2nd item price with GST is:%f\n", price[1]+0.18*price[1]);
	printf("3rd item price with GST is:%f\n", price[2]+0.18*price[2]);	
	
	return 0;
}

