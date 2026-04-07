#include <stdio.h>
int main(){
	int *ptr, x;
	ptr = &x;
	*ptr = 1;	//x=1
	
	printf("Value of x = %d\n",x);	//x=1
	printf("Value of *ptr = %d\n\n",*ptr);	//x=1
	
	*ptr += 5;	//x=6
	printf("Value of x = %d\n",x);	//x=6
	printf("Value of *ptr = %d\n\n",*ptr);	//x=6
	
	(*ptr)++;	//x=7	(*ptr) it means value of this pointer...
	printf("Value of x = %d\n",x);	//x=7
	printf("Value of *ptr = %d\n",*ptr);	//x=7
	return 0;
}
