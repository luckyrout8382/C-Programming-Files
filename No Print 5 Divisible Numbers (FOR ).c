//No print 5 divisible numbers..
# include <stdio.h>
int main () {
	int n,o;
	printf("Enter the Number--->");
	scanf("%d", &n);
	for(o=1;o<=n;o++)
	{
		if (o%5!=0)
		{
			printf("%d\n", o);
		}
		continue;
	}
	return 0;
}
