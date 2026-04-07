# include <stdio.h>
void any_table(int n);

int main(){
	int n;
	printf("Enter any table number:");
	scanf("%d",&n);
	
	any_table(n);
	
}

void any_table(int n){
	int i=1,x;
	while (i<=10){
		x=n*i;
		printf("%d * %d = %d \n",n,i,x);
		i++;
	}
}


