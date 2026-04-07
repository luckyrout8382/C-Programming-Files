//print n number..
#include <stdio.h>

int main(){
	int n,i;
	printf("Enter the number:");
	scanf("%d", &n);
	
	while (i<=n){
		i++;
		if (i==7){
			continue;
		}
		printf("%d \n", i);
	}
	
	return 0;
}

