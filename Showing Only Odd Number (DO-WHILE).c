//showing only odd number..
#include <stdio.h>


int main(){
	int n, i=1;
	printf("Enter Number:");
	scanf("%d", &n);
	do {
		if(i%2!=0){
			printf("ODD Numbers...%d\n", i);
		}
		i++;
	} while (i<=n);
	
	return 0;
}

