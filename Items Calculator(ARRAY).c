//PRICE CALCULATOR... 
#include <stdio.h>

int main(){
	int n, i, j;float Total=0.0;
	
	printf("-----------------------\n");
	printf("_WELCOME_TO_MY_STORE_:)\n");
	printf("-----------------------\n");
	
	printf("Please Enter items: ");
	scanf("%d", &n);
	printf("-----------------------\n");
	
	float price[n];
	
	for(j=0;j<n;j++){
		printf("Enter %d item price: ", j+1);
		scanf("%f",&price[j]);
	}
	
	printf("-----------------------\n");
	printf("Price List with 18%% GST\n");
	printf("-----------------------\n");
		
	for(i=0;i<n;i++){
		printf("%d Item price with GST: %.2f\n", i+1, price[i]+0.18*price[i]);
		Total=Total+(price[i]+0.18*price[i]);
	}																						//1)IF TOTAL VALUE > 500, THEN -5%.
																							//2)IF TOTAL VALUE > 1500, THEN -10%.
	printf("------------------------------\n");												//3)IF TOTAL VALUE > 2500, THEN -15%.
	printf("Your total Amount is: %.2f\n", Total);											//4)IF TOTAL VALUE > 3500, THEN -20%
	printf("------------------------------\n");												//5)IF TOTAL VALUE > 4500, THEN -25%.
	
	if (Total>500 && Total<=1500){
		printf("Discount Applied -5%%\nYour Total amount is:%.2f",Total-Total*5/100);
	} else if (Total>1500 && Total<=2500){
			printf("Discount Applied -10%%\nYour Total amount is:%.2f",Total-Total*10/100);	
		}
	 else if (Total>2500 && Total<=3500){
			printf("Discount Applied -15%%\nYour Total amount is:%.2f",Total-Total*15/100);
		}
	 else if (Total>3500 && Total<=4500){
			printf("Discount Applied -20%%\nYour Total amount is:%.2f",Total-Total*20/100);
		} else if(Total>4500){ 
			printf("Discount Applied -25%%\nYour Total amount is:%.2f",Total-Total*25/100);
		}
				
	printf("\n-----------------------\n");
	printf("THANK_YOU_:)VISIT_AGAIN:)\n");
	printf("-----------------------\n");
	
	return 0;
}

