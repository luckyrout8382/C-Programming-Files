//Function printhello..
#include <stdio.h>

void odia();
void hindi();
void punjabi();
void bengali();
void marathi();
void tamil();
void telugu();
void kannada();
void braj();
void sanskrit();
void gujurati();
void urdu();

int main(){
	printf("Language Verification...! \n 1)o for ODIA. \n 2)h for HINDI. \n 3)p for PUNJABI. \n 4)b for BENGALI. \n 5)m for MARATHI. \n 6)t for TAMIL. \n 7)l for TELUGU. \n 8)k for KANNADA. \n 9)r for BRAJ BHASA. \n 10)s for SANSKRIT. \n 11)g for GUJURATI. \n 12)u for URDU. \n ");
	char ch;
	printf("\nEnter Your Language:--> \t");
	scanf("%c", &ch);
	
	if(ch == 'o'){
		odia();
	}
	
	if(ch == 'h'){
		hindi();
	}
	
	if(ch == 'p'){
		punjabi();
	}
	
	if(ch == 'b'){
		bengali();
	}
	
	if(ch == 'm'){
		marathi();
	}
	
	if(ch == 't'){
		tamil();
	}
	
	if(ch == 'l'){
		telugu();
	}
	
	if(ch == 'k'){
		kannada();
	}
	
	if(ch == 'r'){
		braj();
	}
	
	if(ch == 's'){
		sanskrit();
	}
	
	if(ch == 'g'){
		gujurati();
	}
	
	if(ch == 'u'){
		urdu();
	}
	
	return 0;
}

void odia(){
	printf("NAMASKARA");
}

void hindi(){
	printf("NAMASTE");
}

void punjabi(){
	printf("SAT SRI AKAL");
}

void bengali(){
	printf("NOMOSKAR");
}

void marathi(){
	printf("NAMASKAR");
}

void tamil(){
	printf("VANAKKAM");
}

void telugu(){
	printf("NAMASKARAM");
}

void kannada(){
	printf("NAMASKAR");
}

void braj(){
	printf("RADHEY RADHEY");
}

void sanskrit(){
	printf("NAMASKARAH");
}

void gujurati(){
	printf("KEM CHHO");
}

void urdu(){
	printf("ASSSALAM ALAYKUM");
}
