//Sum of "N" Natural Numbers..
# include <stdio.h>
int main () {
	int n,i,sum=0;
	printf("Enter Your Number-->");
	scanf("%d", &n);
	
	for(i = 1;i <= n; i ++){
		sum = sum + i;
		printf("%d = %d \n", i, sum);
	}
	printf("Result--->%d \n", sum);

	return 0;
}

