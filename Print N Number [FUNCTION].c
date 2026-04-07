//ptint n number..
#include <stdio.h>
void printn(int a,int i);

int main(){
	int a,i;
	printf("Enter Number:");
	scanf("%d", &a);
	
	printn(a,i);
	
	return 0;
}

void printn(int a, int i){
	for (i = 0; i <= a; i++){
		printf("%d \n", i);
	}
}

