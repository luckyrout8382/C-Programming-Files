//Salting Generate new Password.
#include<stdio.h>
#include<string.h>
void salt(char password[]);
void salt(char password[]){
	char salt[] = "123";
	char newpassword[200];
	strcpy(newpassword, password);
	strcat(newpassword, salt);	//text + 123..
	puts(newpassword);	
}
int main(){
	char password[100];
	printf("Enter User Name: ");
	scanf("%s", &password);
	printf("Your New Password is: ");
	salt(password);
	
	return 0;
}
