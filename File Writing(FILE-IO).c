//File operation
#include<stdio.h>
int main(){
	FILE *fptr;		//'w' use for writing mode
	fptr = fopen("HelloWorld.txt", "w");	

	//fscanf(use for writing from a file)..
	fprintf(fptr, "%c", 'M');
	fprintf(fptr, "%c", 'A');
	fprintf(fptr, "%c", 'N');
	fprintf(fptr, "%c", 'G');
	fprintf(fptr, "%c", 'O');
	fprintf(fptr, "%c", 'S');
	fclose(fptr);
	return 0;
}
