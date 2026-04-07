// Check Vowel or Consonant..
#include <stdio.h>
int main(){
	char ch;
	printf("Enter Character to check Vowel or not.\n");
	printf("Enter Character: ");
	scanf("%c", &ch);
	
	switch(ch) {
		case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U': printf("It is a vowel.");break;
		default : printf("\t!Not a Vowel.");
	}
	return 0;
}
