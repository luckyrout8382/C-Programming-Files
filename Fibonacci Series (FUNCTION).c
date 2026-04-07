# include <stdio.h>

void fibo(int n);
int main(){
	int n;
	printf("How many Fibonacci series would you like to see? please Enter: ");
	scanf("%d",&n);
	
	fibo(n);
		
	return 0;
}



void fibo(int n){
	int f=0,s=1,m,i=1;
	do{
		i++;
		m=f+s;
		f=s;
		s=m;
		printf("%d\t");
	} while (i<=n);
}

