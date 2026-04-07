//Bank Account..
#include <stdio.h>
int main(){
	int n, Pin = 1234, PIN; char ch ; float Balance = 10000, Ammount;
	printf("Hello Sir, Mein ek Bank Jaisa Programming hun.\nMein nehi Janta hun ki Appki Bank Account kis Bank par hai or Kitne Paise hai.\n\n");
	printf("\t1.Axis Bank.\n\t2.Bank of India(BOI).\n\t3.Canara Bank.\n\t4. ICICI Bank.\n\t5. Indian Bank.\n\t6. Odisha Gramya Bank.\n\t7. Postal Bank.\n\t8. Punjab Nationa Bank(PNB).\n\t9. Stae Bank of India(SBI).\n\t10. UCO Bank.\n\n\t");
	printf("--> Please Enter Your Bank Name: ");
	scanf("%d", &n);
	printf("\n\t");
	
	switch(n){
		case 1:printf("You Selected : Axis Bank.");							
		printf("\n\n\t--> Please Enter your PIN: "); scanf("%d", &PIN);
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
		} break;
		
		case 2:printf("You Selected : Bank of India(BOI).");							
		printf("\n\n\t--> Please Enter your PIN: "); scanf("%d", &PIN);
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
		} break;
		
		case 3:printf("You Selected : Canara Bank.");							
		printf("\n\n\t--> Please Enter your PIN: "); scanf("%d", &PIN);
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
		} break;
		
		case 4:printf("You Selected : ICICI Bank.");							
		printf("\n\n\t--> Please Enter your PIN: "); scanf("%d", &PIN);
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
		} break;
		
		case 5:printf("You Selected : Indian Bank.");							
		printf("\n\n\t--> Please Enter your PIN: "); scanf("%d", &PIN);
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
		} break;
		
		case 6:printf("You Selected : Odisha Gramya Bank.");							
		printf("\n\n\t--> Please Enter your PIN: "); scanf("%d", &PIN);
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
		} break;
		
		case 7:printf("You Selected : Postal Bank.");							
		printf("\n\n\t--> Please Enter your PIN: "); scanf("%d", &PIN);
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
		} break;
		
		case 8:printf("You Selected : Punjab National Bank(PNB).");							
		printf("\n\n\t--> Please Enter your PIN: "); scanf("%d", &PIN);
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
		} break;
		
		case 9:printf("You Selected : State Bank of India(SBI).");							
		printf("\n\n\t--> Please Enter your PIN: "); scanf("%d", &PIN);
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
		} break;
		
		case 10:printf("You Selected : UCO Bank.");							
		printf("\n\n\t--> Please Enter your PIN: "); scanf("%d", &PIN);
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
		} break;
		
		default:printf("***You Have Entered Wrong Input! Please Re-start This Programe Again.***");	
	}
	
	return 0;
}
