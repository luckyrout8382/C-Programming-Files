//Check Digits..
//3628-->4digitis

# include <stdio.h>
int main(){
	int n,c=0;
	printf("Enter your Number:");
	scanf("%d", &n);
	
	while (n>0){
		n=n/10;
		c++;
//		printf("Digit is %d\n",n);
	}
	
	printf("\nDigits are %d",c);
	
	return 0;
}
