//function area of circle..
#include <stdio.h>

float areacircle(float r);

int main(){
	float r;
	printf("Enter Radius: ");
	scanf("%f", &r);
	
	printf("Area of Circle: %f", areacircle(r));
	
	return 0;
}

float areacircle(float r){
	return 3.14 * r * r;
}

