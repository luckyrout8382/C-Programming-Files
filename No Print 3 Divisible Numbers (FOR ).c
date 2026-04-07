//No print 3 divisible numbers..
# include <stdio.h>
int main () {
	int n,o;
	printf("Enter the Number--->");
	scanf("%d", &n);
	for(o=1;o<=n;o++)
	{
		if (o%3!=0)
		{
			printf("%d\n", o);
		}
		
	}
	return 0;
}
