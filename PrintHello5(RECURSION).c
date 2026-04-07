#include<stdio.h>
void printhw(int n);

int main(){
	int n;
	printf("Enter n Value: ");
	scanf("%d", &n);
	printhw(n);
	return 0;
}
//recursive function
void printhw(int n){
	if (n==0){
		return;
	}
	printf("Hello World\n");
	printhw(n-1);
}
