//Odd Even Game..
#include <stdio.h>

int main(){
	printf("\n\n\n\t...................................................\n\tIT IS A ODD/EVEN GAME.. CAREFULLY PLAY THIS GAME.\n\n\t!WHEN ENTERD A ODD NUMBER THEN GAME OVER.! \n \n");
	int n;
	
	while( n % 2 == 0){
		printf("\n\tPlease Enter any Number:");
		scanf("%d", &n);
		
		if ( n % 2 != 0){
			break;
		}
		printf("\n\t\t~HURYY~ \n\tIt is an Even Number. \n");
	}
	
	printf("\n\t\tOH NO!\n\tYOU ENTERD A ODD NUMBER...! \n\n\t:)____GAME OVER____(:");
	
	return 0;
}
