//Factorial Number...
# include <stdio.h>
int main() {
	int n,f=1;
	printf("Enter the number...");
	scanf("%d", &n);
	
	int i=1;
	while (i<=n){
		f=f*i;
		printf("%d=%d\n",i,f);
		i++;
	}
	return 0;
}
