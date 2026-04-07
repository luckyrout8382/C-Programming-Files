//No print 5 divisible numbers..
# include <stdio.h>
int main () {
	int n;
	printf("Enter the Number--->");
	scanf("%d", &n);
	
	int i=0;
	while(i<=n){
		if (i%3){
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}
