//print n Number..
#include <stdio.h>

int main(){
	int n,i;
	printf("Enter the number:");
	scanf("%d", &n);
	
	do{
		printf("%d \n", i);
		i++;
	}
	while (i<=n);
	
	return 0;
}

