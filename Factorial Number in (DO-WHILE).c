//Factorial Number...
# include <stdio.h>
int main() {
	int n,f=1;
	printf("Enter the number...");
	scanf("%d", &n);
	
	int i=1;
	do{
		f=f*i;
		printf("%d=%d\n",i,f);
		i++;
	} while(i<=n);
	

	return 0;
}
