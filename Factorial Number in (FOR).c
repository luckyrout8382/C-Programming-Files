//Factorial Number...
# include <stdio.h>
int main() {
	int n,i,f=1;
	printf("Enter the number...");
	scanf("%d", &n);
	for (i=1;i<=n;i++)
	{
		f=f*i;
		printf("%d=%d\n",i,f);
	}
	return 0;
}
