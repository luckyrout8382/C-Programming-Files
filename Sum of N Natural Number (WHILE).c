//Sum of "N" Natural Numbers..
# include <stdio.h>
int main () {
	int n, i, sum=0;
	printf("Enter Your Number-->");
	scanf("%d", &n);
	
	while ( i <= n) {
		sum = i + sum;
		printf("%d = %d \n", i, sum);
		i++;
	}
	printf ("Total value:%d", sum);
	return 0;
}
