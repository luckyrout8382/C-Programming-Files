//Function area of rectangle..
#include <stdio.h>

float arearectangle(float l, float b);

int main(){
	float l, b;
	printf("Enter Lenth: ");
	scanf("%f", &l);
	printf("Enter Breath: ");
	scanf("%f", &b);
	
	printf("Area of Rectangle: %f", arearectangle(l, b));
	
	return 0;
}

float arearectangle(float l, float b){
	return l * b;
}

