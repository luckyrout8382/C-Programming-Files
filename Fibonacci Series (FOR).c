//Fibonacci series...10
# include <stdio.h>
int main () {
	int n,f=0,s=1,m,o;
	printf("Enter the Number--->");
	scanf("%d", &n);
	
	for(o=1;o<=n;o++)
	{
		m=f+s;
		f=s;
		s=m;
		printf("%d\t",f);
	}
	return 0;
}
