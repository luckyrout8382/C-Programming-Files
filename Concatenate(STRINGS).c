//Conctenate in Strings..
# include <stdio.h>
# include <string.h>

int main(){
	char ch1[10]="Hello";
	char ch2[]="World";
	
	printf("ch1 is: %s\n", ch1);
	printf("ch2 is: %s\n\n", ch2);
	printf("Concatenate String: %s\n", strcat(ch1, ch2));
	
	return 0;
}
