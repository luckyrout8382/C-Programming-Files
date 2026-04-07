//avrage 3 numbers..
# include <stdio.h>
int main (){
	int x,y,z,sum,avr;
	printf("Enter X Number:");
	scanf("%d", &x);
	printf("Enter Y Number:");
	scanf("%d", &y);
	printf("Enter Z Number:");
	scanf("%d", &z);
	
	sum=x+y+z;
	avr=sum/2;
	printf("Avrage is: %d", avr);
	
	return 0;
}
