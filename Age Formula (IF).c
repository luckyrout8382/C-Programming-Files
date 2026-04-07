//Age Formula
# include <stdio.h>
int main(){
	int age =0;
	printf("Enter Your Age--->");
	scanf("%d", &age);
	if (age>=0 && age<=6){
		printf("Baby");
	}
	else if(age>7 && age<=12){
		printf("child");
	}
	else if(age>12 && age<18){
	printf("Young");}
	else if(age>18 && age<40){
		printf("Middle age");
	}
	else if (age>40 && age<60){
	printf("Citizen");
	}
	else if(age>60 && age<80){
		printf("Senior citizen");
	}
	else if (age>80){
	printf("Super senior citizen");
	}
	return 0;
}
