// 26 Oct Task (Odd and Even Number in IF Formula..)
# include <stdio.h>
int main (){
	int num=0;
	printf("Enter Your Number-->");
	scanf("%d", &num);
	if (num %2==0){
		printf("Even Number \n");
		if ( num / 2){
			printf("It divisible by 2");
		}
	}
	else{
	printf("Odd Number");
	}
	return 0;
}

