//Pointer Addition
#include<stdio.h>
int main(){
	int size[3] = {10, 20, 60};
	int *ptr = size;
	
	printf("Address of size[0]: %d\n", (void*)ptr);
	printf("Value of size[0]: %d\n", *ptr);
	
	ptr = ptr + 1;
	
	printf("Address of size[1]: %d\n", (void*)ptr);
	printf("Value of size[1]: %d\n", *ptr);
	
	return 0;
}
