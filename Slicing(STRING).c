//Slicing a Word.
#include<stdio.h>
#include<string.h>
void slice(char str[], int n, int m);
void slice (char str[], int n, int m){
	char newstr[100];
	int j = 0, i;
	for(i = n; i <= m;i++){
		newstr[j] = str[i];
		j++;
	}
	newstr[j] = '\0';
	puts(newstr);
}
int main(){
	char str[100];
	printf("Enter Word to Slice: ");
	scanf("%s", str);
	slice(str, 3, 6);
	return 0;
}
