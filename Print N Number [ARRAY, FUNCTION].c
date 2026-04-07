//print n number..
#include <stdio.h>

//Function declaraton.
void printnum(int num[],int n);

int main(){
	int n;
	printf("Enter Number:");
	scanf("%d", &n);
	
//	n is the size of array
	int num[n];
	printf("Enter %d Numbers.\n", n);
	
//	functoin call
	printnum(num,n);

	return 0;
}

//Function definition
void printnum(int num[],int n){
	int i;
	for (i=0;i<n;i++){
		printf("Num %d:",i+1);
		scanf("%d", &num[i]);
	}
	
	printf("\nThe Numbers are:");
	
	int j;
	for(j=0;j<n;j++){
		printf("%d\t",num[j]);
	}
	
}
