//String Function.
#include <stdio.h>
#include <string.h>
int main(){
	char name[]={'L','U','C','K','Y','\0'};		// '\0' Stands for Null Character.. memory location is 6
	char name1[]="LUCKY";
	
	char fullname[]={'J','A','S','O','B','A','N','T',' ','R','O','U','T','\0'};
	char fullname1[]="JASOBANT ROUT";	
	
	printf("1. %s \n",name);
	printf("2. %s \n",name1);
	printf("3. %s \n",fullname);
	printf("4. %s \n",fullname1);
	
	return 0;
}
