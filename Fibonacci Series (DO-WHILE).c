//Fibonacci series...10
# include <stdio.h>
int main () {
	int n,f=0,s=1,m;
	printf("Enter the Number--->");
	scanf("%d", &n);
	
	
	int i=1;
	do{
		i++;
		m=f+s;
		f=s;
		s=m;
		printf("%d\t");
	} while (i<=n);
	
	return 0;
}
