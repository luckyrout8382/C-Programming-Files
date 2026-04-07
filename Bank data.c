//Bank information
#include <stdio.h>
	typedef struct bankinformation{
		int account_no;
		char account_name[30];
		char bank_name[30];
		char ifsc_code;
		
	}bankinfo;
int main(){
	int n;
	printf("How many accounts do you want to enter data for? -> ");
	scanf("%d", &n);
	bankinfo customer[n];
	
	int i, count=0;
	for(i=0; i<n; i++){
		printf("\nEnter information for customer %d\n", i + 1);printf("*******************************\n");
		printf("Enter Account no: ");scanf("%d", &customer[i].account_no);
		printf("Enter Account Name: ");scanf(" %[^\n]s", customer[i].account_name);
		printf("Enter Bank Name: ");scanf(" %[^\n]s", customer[i].bank_name);
		printf("Enter IFSC code: ");scanf("%s", &customer[i].ifsc_code);
		printf("\n----------------------------------------\n");
		printf("\t\tBank Name is: %s\n\t\tBank Account no: %d\n\t\tBank Account Name: %s\n\t\tIFSC code: %f\n",customer[i].bank_name, customer[i].account_no, customer[i].account_name, customer[i].ifsc_code);
		
		count++;
	}
	printf("\nYou enterd %d Customer Data.", count);
	return 0;
}
