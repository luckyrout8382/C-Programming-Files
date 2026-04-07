#include <stdio.h>
int main(){
	int age = 20;
	int *lucky = &age;
	int age1= *lucky;
	
	printf("lucky's age is: %d\n",age1);
	printf("memory location is: %d\n", &age);		//Adress of Age variable.
	printf("age is: %d\n\n",age);
	
	return 0;
}
