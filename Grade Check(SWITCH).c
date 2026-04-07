//Grade check..
#include <stdio.h>
int main(){
	char ch;
	printf("Enter Your Grade {A-F}: "); scanf("%c",&ch);
	
	switch(ch){
		case 'A':printf("Excellent"); break;
		case 'B':printf("Very Good"); break;
		case 'C':printf("Good"); break;
		case 'D':printf("Avarage"); break;
		case 'E':printf("Just Passed"); break;
		case 'F':printf("Fail"); break;
		
		default:printf("Enterd Wrong Value...!");
	}
	return 0;
}
