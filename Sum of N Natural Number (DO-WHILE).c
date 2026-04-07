//sum N natural Number..
#include <stdio.h>

int main(){
	int n,i,sum=0;
	printf("Enter the number:");
	scanf("%d", &n);
	
	do{
		sum=sum+i;
		printf("%d = %d \n", i, sum);
		i++;
	}
	while (i<=n);
	
	printf("Result is:%d", sum);
	
	return 0;
}

