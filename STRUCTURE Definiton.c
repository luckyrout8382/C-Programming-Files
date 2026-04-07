//Defination of Structure.
#include <stdio.h>
#include <string.h>
struct student{
	char name[100];
	int roll;
	float cgpa;
};
int main(){
	struct student s1;
	s1.roll=1234;
	s1.cgpa=7.5;
	strcpy(s1.name, "jasobant");
	
	printf("Student Name is: %s\n", s1.name);
	printf("Student Roll no: %d\n", s1.roll);
	printf("Student Mark is: %f\n", s1.cgpa);

	return 0;
}
