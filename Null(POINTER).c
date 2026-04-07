//Use of Null..
#include<stdio.h>
#include<stdlib.h> //Required for NULL..
int main(){
	int X = NULL ,*ptr = &X;
	if (ptr == NULL){
		printf("X Pointer is Null.\n\n");
	} else {
		printf("Value of X ptr: %d\n\n", X);
	}
	
	int Y = 10 ,*Ptr = &Y;
	if (Ptr == NULL){
		printf("Y Pointer is Null.\n\n");
	} else {
		printf("Value of Y Ptr: %d\n\n", Y);
	}
	
	return 0;
}
