//Think n Number & chek even or odd..
#include <stdio.h>

//Function declaraton.
void printnum(int num[],int n);

int main(){
	int n;
	printf("Please Think of some Numbers:");
	scanf("%d", &n);
	printf("--------------------------------\n");
	
//	n is the size of array
	int num[n];
	printf("\nTell me Your Numbers One by One. Which is %d.\n", n);
	
//	functoin call
	printnum(num,n);

	return 0;
}

//Function definition
void printnum(int num[],int n){
	int i,c=0;
	for (i=0;i<n;i++){
		printf("Please Tell me Your %d Number:",i+1);
		scanf("%d", &num[i]);
		
	}
	
	
	printf("\nI have separated the even and odd numbers from your numbers.\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	
	int j;
	for(j=0;j<n;j++){
		if(num[j]%2==0){
			c++;
		} else {
			printf("ERROR %d! is Odd:(\n",num[j]);
		}
	}
	printf("\n%d Even Numbers in Your Numbers.",c);
	
}
