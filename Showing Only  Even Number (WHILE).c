//showing only even number..
#include <stdio.h>
int main(){
	int n, i=1;
	printf("Enter Number:");
	scanf("%d", &n);
	
	while (i<=n){
		i++;
		if(i%2==0){
			printf("Even number--> %d\n", i);
		}
	}
	return 0;
}

