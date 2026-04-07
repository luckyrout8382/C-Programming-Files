//Think n Number & chek even or odd..
#include <stdio.h>

//Function declaraton.
void avrage_calculate(int num[],int n);

int main(){
	int n;
	printf("Please enter Subjects:");
	scanf("%d", &n);
	printf("--------------------------------\n");
	
//	n is the size of array
	int num[n];
	printf("Tell me Your Subjects marks one by one. Which is %d.\n", n);
	
//	functoin call
	avrage_calculate(num,n);

	return 0;
}

//Function definition
void avrage_calculate(int num[],int n){
	int i;
	int sum=0;
	float avr=0.0;
	
	for (i=0;i<n;i++){
		printf("Please Tell me Your %d Subject mark:",i+1);
		scanf("%d", &num[i]);
		sum += num[i];
	}
	if (n>0){
		avr=(float)sum/n;
		
		printf("--------------------------------\n");
		printf("Mark of all Subjects:%ld\n", sum);
		printf("The Avrage mark is:%.2fpercent \nYour Grade is ",avr);
	} else {
		printf("Wrong Input");
	}
	
	if (avr>87 && avr<=100){
		printf("A+");
	}else if (avr>77 && avr <=87){
		printf("A");	
	}else if (avr>67 && avr<=77){
		printf("B+");
	}else if (avr>57 && avr<=67){
		printf("B");
	}else if(avr>47 && avr<=57){ 
		printf("C");
	}else if(avr>30 && avr<=47){
		printf("D");
	}else if(avr<30){
		printf("F");
	}
	
}
