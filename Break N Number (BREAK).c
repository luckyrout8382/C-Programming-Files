//print n number..
#include <stdio.h>

int main(){
	int n,i;
	printf("Enter the number:");
	scanf("%d", &n);
	
	while (i<=n){
		if (i==7){
			break;
		}
		printf("%d \n", i);
		i++;
	}
	
	return 0;
}

