#include <stdio.h>
int main() {
	int n;
	printf("Enter the Number of Star--->");
	scanf("%d", &n);
	
	int i=1;
	do{
		int j=1;
		do{
			j++;
			printf("* ");
		} while(j<=i);
		i++;
		printf("\n");
	} while(i<=n);
	
	return 0;
}
