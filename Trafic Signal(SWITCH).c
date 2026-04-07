//Trafic light check...
#include <stdio.h>
int main(){
	char ch;
	printf("\tO--> Red\n\tO--> Yellow\n\tO--> Green\n\n");
	printf("Enter trafic Signal: ");
	scanf("%c", &ch);
	
	switch(ch){
		case 'R': case 'r':printf("Red--> Stop."); break;
		case 'Y': case 'y':printf("Yellow--> Get Ready."); break;
		case 'G': case 'g':printf("Green--> Go."); break;
		
		default:printf("Please Enter a valid signal.");
	}
	
	return 0;
}
