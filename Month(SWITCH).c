// Check Month.....
#include <stdio.h>
int main(){
	int n;
	printf("Check Month name in press: (1-12)\n");
	printf("Enter Number to chek Month name:");
	scanf("%d", &n);
	
	switch(n){
		case 1: printf("January"); break;
		case 2: printf("February"); break;
		case 3: printf("March"); break;
		case 4: printf("April"); break;
		case 5: printf("May"); break;
		case 6: printf("June"); break;
		case 7: printf("July"); break;
		case 8: printf("Agust"); break;
		case 9: printf("September"); break;
		case 10: printf("October"); break;
		case 11: printf("November"); break;
		case 12: printf("December"); break;
		
		default: printf("You have enterd an wrong Value! Please check...:)");
	}
	return 0;
}
