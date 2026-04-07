//Check Prime no or not..
# include <stdio.h>
int main (){
	int n,c=0;
	printf("Enter Your number:");
	scanf("%d", &n);
	
	int i;
	for(i=1;i<=n;i++){
		if (n%i==0){
			c++;
			printf("%d\n", i);
		}
	}
	printf("\n");
	if (c==2){
		printf("It is Prime.");
	} else{
		printf("It is not Prime.");
	}
	
	return 0;
}
