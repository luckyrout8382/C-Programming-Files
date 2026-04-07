//showing only even number..
#include <stdio.h>


int main(){
	int n, i=1;
	printf("Enter Number:");
	scanf("%d", &n);
	do {
		if(i%2==0){
			printf("EVEN Numbers...%d\n", i);
		}
		i++;
	} while (i<=n);
	
	return 0;
}

