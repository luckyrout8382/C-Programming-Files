//Parrten print...
#include <stdio.h>
int main() {
	int n;
	printf("Enter the Number of Star--->");
	scanf("%d", &n);
	
	int i=1,j;
	while(i<=n){
		j=1;
		while(j<=i){
			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}
