// Type def function.
#include<stdio.h>
typedef struct ComputerEngineeringStudent{
int roll;
float cgpa;
char name[50];
} coe;

int main(){
	coe s1;
	s1.cgpa= 8.9;
	strcpy(s1.name, "Kunal");
	s1.roll=52;

	printf("name: %s\nroll: %d\ncgpa: %f\n",s1.name, s1.roll, s1.cgpa);
	
	return 0;
}

