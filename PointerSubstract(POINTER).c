//Pointer Substract..
#include <stdio.h>
int main() { 
    int size[3] = {10, 20, 30}; 
    int *ptr2 = &size[2]; // Points to 30
    int *ptr0 = &size[0]; // Points to 10 
 
    printf("Pointer 2 Address: %d\n", (void*)ptr2); 
    printf("Pointer 0 Address: %d\n", (void*)ptr0); 
    
    long difference = ptr2 - ptr0;
    printf("defference is: %ld\n", difference);
    ptr2 = ptr2 - 2;
    printf("Value of ptr2 after -2: %d\n", *ptr2);
	return 0;
}
