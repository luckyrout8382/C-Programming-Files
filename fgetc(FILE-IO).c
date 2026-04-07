//File operation
#include<stdio.h>
int main(){
	FILE *fptr;		
	fptr = fopen("HelloWorld.txt", "r");	

	printf("\t%c\n",(fgetc(fptr)));
	printf("\t%c\n",(fgetc(fptr)));
	printf("\t%c\n",(fgetc(fptr)));
	printf("\t%c\n",(fgetc(fptr)));
	printf("\t%c\n",(fgetc(fptr)));
	printf("\t%c\n",(fgetc(fptr)));
	printf("\t%c\n",(fgetc(fptr)));
	printf("\t%c\n",(fgetc(fptr)));
	printf("\t%c\n",(fgetc(fptr)));
	printf("\t%c\n",(fgetc(fptr)));
	printf("\t%c\n",(fgetc(fptr)));
	printf("\t%c\n",(fgetc(fptr)));
	printf("\t%c\n",(fgetc(fptr)));
	printf("\t%c\n",(fgetc(fptr)));
	printf("\t%c\n",(fgetc(fptr)));
	printf("\t%c\n",(fgetc(fptr)));
	printf("\t%c\n",(fgetc(fptr)));
	
	fclose(fptr);
	return 0;
}
