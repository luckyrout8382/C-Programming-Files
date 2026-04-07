//odd even chek..
#include <stdio.h>

void choddeven(int n);

int main(){
	int n;
	printf("enter number:");
	scanf("%d", &n);
	
	choddeven(n);
	
	return 0;
}

void choddeven(int n){
	if(n%2==0){
		printf("even number.");
	} else {
		printf("odd number.");
	}
}
