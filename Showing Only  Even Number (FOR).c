//1-n number showing only Even Number..
# include <stdio.h>
int main () {
	int n,o;
	printf("Enter the Number--->");
	scanf("%d", &n);
	for(o=1;o<=n;o++)
	{
		if(o%2==0)
		{
			printf("%d\n", o);
		}
	}
	return 0;
}
