//Check Palindrum Number.. not!
//121-->121
# include <stdio.h>
int main(){
	int n,c,r,sum=0;
	printf("Enter your Number:");
	scanf("%d", &n);
	c=n;
	while (n>0){
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(c==sum){
		printf("\nIt is a Palaindrum Number.");
	} else {
		printf("\nNot a Palaindrum Number.");
	}
	return 0;
}
