//Print n number..
#include <stdio.h>
int main(){
	int n,i,j;
	printf("Enter Number:");
	scanf("%d", &n);
	
	int num[n];
	printf("Enter %d Numbers.\n", n);
	
	for (i=1;i<=n;i++){
		printf("number %d:",i);
		scanf("%d", &num[i]);
	}
	printf("\nThese are the Numbers:");
	
	for(j=1;j<=n;j++){
		printf("\t %d",num[j]);
	}
	
	return 0;
}
