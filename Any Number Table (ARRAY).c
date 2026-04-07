//Array any Table..
#include <stdio.h>
int main(){
	int n;
	printf("Which number table would you like to see?");
	scanf("%d",&n);				//2 table
	printf("----------------------------------------\n");
	
	int table[n], i, x;
	for(i=1;i<=10;i++){
		x=n*i;
		printf("%d * %d = %d\n", n, i, x);
	}
		
	return 0;
}
