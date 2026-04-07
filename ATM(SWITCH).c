//ATM..
#include <stdio.h>
int main(){
	char ch; int Pin = 1234, PIN; float Balance = 10000, Ammount;
	printf("Hello sir, Mein ek ATM jaisa Program hun. Mein nehi janta hun Appki Account mein abhi kitne paise hain. Mein toh sirf ek chotta sa program hun, isiliye mein mankar chalta hun ki Appki Account mein Rs.10000.00 hai.\n\n");
	printf("\t--> Please Enter your PIN: "); scanf("%d", &PIN);
	
	switch (PIN == Pin){
		case 0:printf("\n\n\t\t***ERROR: Invalid PIN. Try Again!***\n"); break;
		case 1:printf("\t\t\t\tPIN Accepted.\n\n\t--> Please select an Option:\n\t\t\t\tC: Check Balance.\n\t\t\t\tD: Deposite Money.\n\t\t\t\tW: Withdrawl Money.\n\t\t\t\tE: Exist.\n\n"); printf("\t--> Select ==> "); scanf(" %c", &ch);
				switch (ch){
					case 'C':case 'c':printf("\n\t\tYour Current Balance is %.2f",Balance);break;
					case 'D':case 'd':printf("\n\t\tEnter Your Deposite Ammount:"); scanf("%f", &Ammount);
							Balance = Balance + Ammount; printf("\t\tYour Money Deposite Successfully.\n\n\t\tYour Main Balance is %.2f", Balance); break;
					case 'W':case 'w':printf("\n\t\tEnter Your Withdral Ammount:"); scanf("%f",&Ammount);
							Balance = Balance - Ammount; printf("\t\tYour Money Withdrawl Successfully. Please Collect Your Cash.\n\n\t\tYour Main Balance is %.2f", Balance); break;
					case 'E':case 'e':printf("\n\t\tThank_You, Clossing Current Account..."); break;
					
					default: printf("Invalid Section!\n");
				}
		
	}
	
	return 0;
}
