//Check Prime no or not..
# include <stdio.h>
int main (){
	int n,c=0;
	printf("Enter Your number:");
	scanf("%d", &n);
	
	int i=1;
	do{
		if(n%i==0){
			c++;
			printf("%d\n",i);
		}
		i++;
	} while(i<=n);
	if(c==2){
		printf("Prime Number.");
	} else {
		printf("Not prime number.");
	}
		
	return 0;
}

