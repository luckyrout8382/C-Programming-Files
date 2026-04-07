//some students data structure
#include <stdio.h>
#include <string.h>
struct student{
	char name[100];
	int roll;
	float cgpa;
};
int main(){
	struct student s1, s2, s3;
	
	s1.roll=1234;
	s1.cgpa=7.5;
	strcpy(s1.name, "Jayant");
	printf("Student Name is: %s\n", s1.name);
	printf("Student Roll no: %d\n", s1.roll);
	printf("Student Mark is: %f\n\n", s1.cgpa);
	
	s2.roll=4321;
	s2.cgpa=5.1;
	strcpy(s2.name, "Arman");
	printf("Student Name is: %s\n", s2.name);
	printf("Student Roll no: %d\n", s2.roll);
	printf("Student Mark is: %f\n\n", s2.cgpa);
	
	s3 = (struct student){ "Niranjan", 4653, 9.2};
	printf("Student Name is: %s\n", s3.name);
	printf("Student Roll no: %d\n", s3.roll);
	printf("Student Mark is: %f\n\n", s3.cgpa);
	return 0;
}
