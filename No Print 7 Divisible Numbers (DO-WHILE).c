//No print 7 divisible numbers..
# include <stdio.h>
int main () {
	int n;
	printf("Enter the Number--->");
	scanf("%d", &n);
	
	int i=0;
	do {
		if (i%7!=0){
			printf("%d\n", i);
		}
		i++;
	} while(i<=n);
	
	return 0;
}
