//Check reverse.. 1234-->4321
# include <stdio.h>
int main(){
	int n,r;
	printf("Enter your Number:");
	scanf("%ld", &n);
	printf("Your Reverse Number is-->");
	while(n>0){
		r=n%10;
		printf("\n\t%ld",r);
		n=n/10;
	}
	return 0;
}
