//Fibonachi sequence... please enter minimum value.
#include <stdio.h>
int main(){
	int n, i=0, fn, sn, mn;
	printf("Enter Number:");
	scanf("%d", &n);
	
	while (i<=n){
		mn=fn+sn;
		fn=sn;
		sn=mn;
		i++;
		printf("%d \n", fn);
	}
	
	return 0;
}

