//Input name & Print length..
#include <stdio.h>
int countlength(char arr[]);
int countlength(char arr[]){
	int c = 0, i;
	for (i = 0; arr[i] != '\0'; i++){
		c++;
	}
	return c-1;
}
int main(){
	char name[100];
	printf("Enter any Word: ");
	fgets(name, 100, stdin);
	printf("This Character length is : %d", countlength(name));
	return 0;
}
