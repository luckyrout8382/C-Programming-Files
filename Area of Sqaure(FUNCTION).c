//Function area of square..
#include <stdio.h>

float areasquare(float s);

int main(){
	float s;
	printf("Enter side: ");
	scanf("%f", &s);
	
	printf("Area of Square: %f", areasquare(s));
	
	return 0;
}

float areasquare(float s){
	return s * s;
}


