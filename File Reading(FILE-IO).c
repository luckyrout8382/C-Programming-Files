//File operation
#include<stdio.h>
int main(){
	FILE *fptr;		//'r' use for reading mode
	fptr = fopen("HelloWorld.txt", "r");	
	
	char ch;	//fscanf(use for reading from a file)..
	fscanf(fptr, "%c", &ch);printf("Data is = %c\n", ch);
	fscanf(fptr, "%c", &ch);printf("Data is = %c\n", ch);
	fscanf(fptr, "%c", &ch);printf("Data is = %c\n", ch);
	fscanf(fptr, "%c", &ch);printf("Data is = %c\n", ch);
	fscanf(fptr, "%c", &ch);printf("Data is = %c\n", ch);
	
	fclose(fptr);
	return 0;
}
