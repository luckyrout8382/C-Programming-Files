//File operation
#include<stdio.h>
int main(){
	FILE *fptr;		//'a' use for append mode
	fptr = fopen("HelloWorld.txt", "a");	

	//fscanf(use for add from a file)..
	fprintf(fptr, "%c", 'M');
	fprintf(fptr, "%c", 'A');
	fprintf(fptr, "%c", 'N');
	fprintf(fptr, "%c", 'G');
	fprintf(fptr, "%c", 'O');
	fprintf(fptr, "%c", 'S');
	fclose(fptr);
	return 0;
}
