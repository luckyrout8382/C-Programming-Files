//No print 7 divisible numbers..
# include <stdio.h>
int main () {
	int n;
	printf("Enter the Number--->");
	scanf("%d", &n);
	
	int i=0;
	while(i<=n){
		if (i%7!=0){
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}
