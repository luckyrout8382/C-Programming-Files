//Reasturant...
#include <stdio.h>
int main(){
	int n; char ch; float mutton=150.00, chiken=130.00, fish=100.00, egg=80.00, veg=60.00, chikenF=120.00, chikenH=80.00, vegF=70.00, cash;
	printf("\t\t\t***Welcome to My Resturant***\n\n\tHello Sir, Mein ek Chota sa Program hun.Aap kya Khana Chahenge?\n\t1. Mutton Thali ---> Rs.150.00\n\t2. Chicken Thali ---> Rs.130.00\n\t3. Fish Thali ---> Rs.100.00\n\t4. Egg Thali ---> Rs.80.00\n\t5. Veg Thali ---> Rs.60.00\n\t6. Chicken Dum Biriyani (Full) ---> Rs.120.00\n\t7. Chicken Dum Biriyani (Half) ---> Rs.80.00\n\t8. Veg Dum Biriyani (Full) ---> Rs.70.00\n\n\tPlease Select: "); scanf("%d", &n);
	
	switch(n){
		case 1:printf("\t\tYou Select Mutton Thali.");printf("\n\t\tSir,Kya App Khana khaa chuke hein?\n\t\t[Y for Yes. N for No]: "); scanf(" %c", &ch);
			switch(ch){
				case 'Y': case 'y': printf("\n\t\tYes, Mein khana khaa chuka hun.");break;
				case 'N': case 'n': printf("\n\t\tNo, Nehi.");break;			
				default: printf("\n\t\t***Invalid Section! Try Again..***");
			} printf("\n\n\t\tSir, App Payment Kaise Karenge?\n\t\t[O for Online. C for Cash.]: "); scanf(" %c", &ch);
					switch(ch){
						case 'O':case 'o': printf("\n\t\tPayment Recived by Online Rs.%.2f", mutton);break;
						case 'C':case 'c': printf("\n\t\tPayment by Cash. Sir App mujhe Kitne Paise diye..? --> Rs."); scanf("%f", &cash);
						switch(cash>mutton){
							case 1:printf("\n\t\tSir, ye rahe Appke baki paise Rs.%.2f.\n\n", cash-mutton); break;
							case 0:printf("\n\t\tSir, Mujhe App aur paise dene hoge Rs.%.2f.\n\n", mutton-cash); break;
							default:printf("\n\t\t***Wrong input!***\n\n");
						} break;
						default:printf("Please select valid Option..");
					} break;
			
		case 2:printf("\t\tYou Select Chiken Thali.");printf("\n\t\tSir,Kya App Khana khaa chuke hein?\n\t\t[Y for Yes. N for No]: "); scanf(" %c", &ch);
			switch(ch){
				case 'Y': case 'y': printf("\n\t\tYes, Mein khana khaa chuka hun.");break;
				case 'N': case 'n': printf("\n\t\tNo, Nehi.");break;			
				default: printf("\n\t\t***Invalid Section! Try Again..***");
			} printf("\n\n\t\tSir, App Payment Kaise Karenge?\n\t\t[O for Online. C for Cash.]: "); scanf(" %c", &ch);
					switch(ch){
						case 'O':case 'o': printf("\n\t\tPayment Recived by Online Rs.%.2f", chiken);break;
						case 'C':case 'c': printf("\n\t\tPayment by Cash. Sir App mujhe Kitne Paise diye..? --> Rs."); scanf("%f", &cash);
						switch(cash>chiken){
							case 1:printf("\n\t\tSir, ye rahe Appke baki paise Rs.%.2f.\n\n", cash-chiken); break;
							case 0:printf("\n\t\tSir, Mujhe App aur paise dene hoge Rs.%.2f.\n\n", chiken-cash); break;
							default:printf("\n\t\t***Wrong input!***\n\n");
						}  break;
						default:printf("Please select valid Option..");
					} break;	
		
		case 3:printf("\t\tYou Select Fish Thali.");printf("\n\t\tSir,Kya App Khana khaa chuke hein?\n\t\t[Y for Yes. N for No]: "); scanf(" %c", &ch);
			switch(ch){
				case 'Y': case 'y': printf("\n\t\tYes, Mein khana khaa chuka hun.");break;
				case 'N': case 'n': printf("\n\t\tNo, Nehi.");break;			
				default: printf("\n\t\t***Invalid Section! Try Again..***");
			} printf("\n\n\t\tSir, App Payment Kaise Karenge?\n\t\t[O for Online. C for Cash.]: "); scanf(" %c", &ch);
					switch(ch){
						case 'O':case 'o': printf("\n\t\tPayment Recived by Online Rs.%.2f", fish);break;
						case 'C':case 'c': printf("\n\t\tPayment by Cash. Sir App mujhe Kitne Paise diye..? --> Rs."); scanf("%f", &cash);
						switch(cash>fish){
							case 1:printf("\n\t\tSir, ye rahe Appke baki paise Rs.%.2f.\n\n", cash-fish); break;
							case 0:printf("\n\t\tSir, Mujhe App aur paise dene hoge Rs.%.2f.\n\n", fish-cash); break;
							default:printf("\n\t\t***Wrong input!***\n\n");
						} break;
						default:printf("Please select valid Option..");
					} break;	
					
		case 4:printf("\t\tYou Select Egg Thali.");printf("\n\t\tSir,Kya App Khana khaa chuke hein?\n\t\t[Y for Yes. N for No]: "); scanf(" %c", &ch);
			switch(ch){
				case 'Y': case 'y': printf("\n\t\tYes, Mein khana khaa chuka hun.");break;
				case 'N': case 'n': printf("\n\t\tNo, Nehi.");break;			
				default: printf("\n\t\t***Invalid Section! Try Again..***");
			} printf("\n\n\t\tSir, App Payment Kaise Karenge?\n\t\t[O for Online. C for Cash.]: "); scanf(" %c", &ch);
					switch(ch){
						case 'O':case 'o': printf("\n\t\tPayment Recived by Online Rs.%.2f", egg);break;
						case 'C':case 'c': printf("\n\t\tPayment by Cash. Sir App mujhe Kitne Paise diye..? --> Rs."); scanf("%f", &cash);
						switch(cash>egg){
							case 1:printf("\n\t\tSir, ye rahe Appke baki paise Rs.%.2f.\n\n", cash-egg); break;
							case 0:printf("\n\t\tSir, Mujhe App aur paise dene hoge Rs.%.2f.\n\n", egg-cash); break;
							default:printf("\n\t\t***Wrong input!***\n\n");
						} break;
						default:printf("Please select valid Option..");
					} break;
		
		case 5:printf("\t\tYou Select Veg Thali.");printf("\n\t\tSir,Kya App Khana khaa chuke hein?\n\t\t[Y for Yes. N for No]: "); scanf(" %c", &ch);
			switch(ch){
				case 'Y': case 'y': printf("\n\t\tYes, Mein khana khaa chuka hun.");break;
				case 'N': case 'n': printf("\n\t\tNo, Nehi.");break;			
				default: printf("\n\t\t***Invalid Section! Try Again..***");
			} printf("\n\n\t\tSir, App Payment Kaise Karenge?\n\t\t[O for Online. C for Cash.]: "); scanf(" %c", &ch);
					switch(ch){
						case 'O':case 'o': printf("\n\t\tPayment Recived by Online Rs.%.2f", veg);break;
						case 'C':case 'c': printf("\n\t\tPayment by Cash. Sir App mujhe Kitne Paise diye..? --> Rs."); scanf("%f", &cash);
						switch(cash>veg){
							case 1:printf("\n\t\tSir, ye rahe Appke baki paise Rs.%.2f.\n\n", cash-veg); break;
							case 0:printf("\n\t\tSir, Mujhe App aur paise dene hoge Rs.%.2f.\n\n", veg-cash); break;
							default:printf("\n\t\t***Wrong input!***\n\n");
						} break;
						default:printf("Please select valid Option..");
					} break;
		
		case 6:printf("\t\tYou Select Chiken Dum Biriyani(Full).");printf("\n\t\tSir,Kya App Khana khaa chuke hein?\n\t\t[Y for Yes. N for No]: "); scanf(" %c", &ch);
			switch(ch){
				case 'Y': case 'y': printf("\n\t\tYes, Mein khana khaa chuka hun.");break;
				case 'N': case 'n': printf("\n\t\tNo, Nehi.");break;			
				default: printf("\n\t\t***Invalid Section! Try Again..***");
			} printf("\n\n\t\tSir, App Payment Kaise Karenge?\n\t\t[O for Online. C for Cash.]: "); scanf(" %c", &ch);
					switch(ch){
						case 'O':case 'o': printf("\n\t\tPayment Recived by Online Rs.%.2f", chikenF);break;
						case 'C':case 'c': printf("\n\t\tPayment by Cash. Sir App mujhe Kitne Paise diye..? --> Rs."); scanf("%f", &cash);
						switch(cash>chikenF){
							case 1:printf("\n\t\tSir, ye rahe Appke baki paise Rs.%.2f.\n\n", cash-chikenF); break;
							case 0:printf("\n\t\tSir, Mujhe App aur paise dene hoge Rs.%.2f.\n\n", chikenF-cash); break;
							default:printf("\n\t\t***Wrong input!***\n\n");
						} break;
						default:printf("Please select valid Option..");
					} break;
			
		case 7:printf("\t\tYou Select Chiken Dum Biriyani(Half) Thali.");printf("\n\t\tSir,Kya App Khana khaa chuke hein?\n\t\t[Y for Yes. N for No]: "); scanf(" %c", &ch);
			switch(ch){
				case 'Y': case 'y': printf("\n\t\tYes, Mein khana khaa chuka hun.");break;
				case 'N': case 'n': printf("\n\t\tNo, Nehi.");break;			
				default: printf("\n\t\t***Invalid Section! Try Again..***");
			} printf("\n\n\t\tSir, App Payment Kaise Karenge?\n\t\t[O for Online. C for Cash.]: "); scanf(" %c", &ch);
					switch(ch){
						case 'O':case 'o': printf("\n\t\tPayment Recived by Online Rs.%.2f", chikenH);break;
						case 'C':case 'c': printf("\n\t\tPayment by Cash. Sir App mujhe Kitne Paise diye..? --> Rs."); scanf("%f", &cash);
						switch(cash>chikenH){
							case 1:printf("\n\t\tSir, ye rahe Appke baki paise Rs.%.2f.\n\n", cash-chikenH); break;
							case 0:printf("\n\t\tSir, Mujhe App aur paise dene hoge Rs.%.2f.\n\n", chikenH-cash); break;
							default:printf("\n\t\t***Wrong input!***\n\n");
						} break;
						default:printf("Please select valid Option..");
					} break;	
			
		case 8:printf("\t\tYou Select Veg(Full) Thali.");printf("\n\t\tSir,Kya App Khana khaa chuke hein?\n\t\t[Y for Yes. N for No]: "); scanf(" %c", &ch);
			switch(ch){
				case 'Y': case 'y': printf("\n\t\tYes, Mein khana khaa chuka hun.");break;
				case 'N': case 'n': printf("\n\t\tNo, Nehi.");break;			
				default: printf("\n\t\t***Invalid Section! Try Again..***");
			} printf("\n\n\t\tSir, App Payment Kaise Karenge?\n\t\t[O for Online. C for Cash.]: "); scanf(" %c", &ch);
					switch(ch){
						case 'O':case 'o': printf("\n\t\tPayment Recived by Online Rs.%.2f", vegF);break;
						case 'C':case 'c': printf("\n\t\tPayment by Cash. Sir App mujhe Kitne Paise diye..? --> Rs."); scanf("%f", &cash);
						switch(cash>vegF){
							case 1:printf("\n\t\tSir, ye rahe Appke baki paise Rs.%.2f.\n\n", cash-vegF); break;
							case 0:printf("\n\t\tSir, Mujhe App aur paise dene hoge Rs.%.2f.\n\n", vegF-cash); break;
							default:printf("\n\t\t***Wrong input!***\n\n");
						} break;
						default:printf("Please select valid Option..");
					} break;		
						
		default: printf("***!Wrong Input..***");
	}
	
	printf("\n\n\t\tThankyou sir, Visit Again.");

	return 0;
}
