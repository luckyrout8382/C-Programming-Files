//any number table..
#include <stdio.h>

int main(){
	int n, i = 1, x;
	printf("Enter the number:");
	scanf("%d", &n);
	while ( i <= 10 ){
		x = n * i;
		printf(" %d * %d = %d \n", n, i, x);
		i++;
	}
	return 0;
}

