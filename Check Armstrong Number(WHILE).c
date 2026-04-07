//Check Armstrong Number.. not!
//it is 153-->1*1*1=1+5*5*5=125+3*3*3=27
# include <stdio.h>
int main(){
	int n,c,r,arm=0;
	printf("Enter your Number:");
	scanf("%d", &n);
	
	c=n;
	
	while (n>0){
		r=n%10;
		arm=(r*r*r)+arm;
		n=n/10;
	}
	if(c==arm){
		printf("\nIt is an Armstrong Number.");
	} else {
		printf("\nNot an Armstrong Number.");
	}
	
	return 0;
}
