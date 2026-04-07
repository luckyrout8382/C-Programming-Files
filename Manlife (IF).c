//MAN'S LIFE FORMULA..
# include <stdio.h>
int main(){
	int age =0;
	printf("Enter the Age--->");
	scanf("%d", &age);
	if (age>0 && age<=3){
		printf("you are now live in Baby stage..");
	}
	else if(age>3 && age<=5){
		printf("You are now LKG/UKG..");
	}
	else if(age>5 && age<=15){
		printf("You are now study in class 1 to 10th..");
	}
	else if(age>15 && age<=17){
		printf("You are now +2 Collage..");
	}
	else if (age>17 && age<=20){
	printf("You are now +3 Collage..");
	}
	else if(age>20 && age<=22){
		printf("You are now PG..");
	}
	else if (age>22 && age<=26){
		printf("You are now searching for Job..");
	}
	else if (age>26 && age<=30){
		printf("You are now elegible for Marriage..");
	}
	else if (age>30 && age<=60){
		printf("You are now wroking in Job and Familiy..");
	}
	else if (age>60 && age<=75){
		printf("You are now live in OLD age.. Pension");
	}
	else if (age>75 && age<=102){
		printf("YOUR DEATH IS ANYTIME, ANYWHERE..");
	}
	else {
		printf("YOU ARE NOT ALIVE..");
	}
	return 0;
}

