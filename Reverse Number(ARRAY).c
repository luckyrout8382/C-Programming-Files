//Reverse Array.. 
#include <stdio.h>

int main(){
	int n, f, s;	
	
	printf("How many numbers do you want to reverse: ");
	scanf("%d", &n);		//Variable Length Array..
	printf("-----------------------------\n");
	
	int num[n];
	
	int j;
	for(j=0;j<n;j++){
		printf("Enter %d Numbers : ", j+1);		//Array Value.
		scanf("%d",&num[j]);
	}
	
	printf("-----------------------------\n");
	
	int i;	
	for(i=0;i<n/2;i++){
		f=num[i];		
		s=num[n-i-1];			//values change.
		num[i]=s;
		num[n-i-1]=f;
		
	}
	
	printf("Your Reverse Numbers are--> ");
	
	int k;
	for(k=0;k<n;k++){
		printf("%d\t",num[k]);			//change value show here.
	}
	
	printf("\n");

	return 0;
}

