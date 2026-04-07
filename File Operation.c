//File operation
#include<stdio.h>
int main(){
	FILE *fptr;
	fptr = fopen("HelloWorld.txt", "r");
	char ch;
	fscanf(fptr, "%c", &ch);
	printf("Data is = %c\n", ch);
	fscanf(fptr, "%c", &ch);
	printf("Data is = %c\n", ch);
	fscanf(fptr, "%c", &ch);
	printf("Data is = %c\n", ch);
	fscanf(fptr, "%c", &ch);
	printf("Data is = %c\n", ch);
	fscanf(fptr, "%c", &ch);
	printf("Data is = %c\n", ch);
	
	fclose(fptr);
	return 0;
}
