#include <stdio.h>
int main(){
	int age = 21;
	char star = '*';
	float price = 10.00;
	
	int *lucky = &age;
	char *str = &star;
	float *pri = &price;
	
	int luckye = *lucky;
	char strr = *str;
	float prii = *pri;
	
	printf("%d\n",luckye);
	printf("%c\n",strr);
	printf("%f\n\n",prii);
	
	printf("Adress of age variable: %p\n",&age);							//%p for pointer --> Adress of age variable..
	printf("Unsignedint value in Adress of age variable: %u\n",&age);		//%u for unsigned int..
	printf("adress in lucky variable: %u\n",lucky);
	printf("adress of lucky variable: %u\n\n",&lucky);
	
	printf("%d\n",*lucky);													//value of lucky-->21
	printf("%d\n\n",*(&luckye));
	
	return 0;
}
