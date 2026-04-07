// Data of 3 students
#include <stdio.h>
#include <string.h>
struct student{
	char name[100];
	int roll;
	float cgpa;
};
int main(){
	struct student s1, s2, s3, s4;
	s1.roll= 1234;
	s1.cgpa= 7.5;
	strcpy(s1.name, "Ram");
	
	s2.roll= 1235;
	s2.cgpa= 6.2;
	strcpy(s2.name, "Shyam");
	
	s3.roll= 1236;
	s3.cgpa= 5.2;
	strcpy(s3.name, "Hari");
	
	s4 = (struct student){"Jayant", 12234, 5.23};
	
	printf("Student (1) Name is: %s\n", s1.name);
	printf("Student (1) Roll no: %d\n", s1.roll);
	printf("Student (1) Mark is: %f\n\n", s1.cgpa);

	printf("Student (2) Name is: %s\n", s2.name);
	printf("Student (2) Roll no: %d\n", s2.roll);
	printf("Student (2) Mark is: %f\n\n", s2.cgpa);

	printf("Student (3) Name is: %s\n", s3.name);
	printf("Student (3) Roll no: %d\n", s3.roll);
	printf("Student (3) Mark is: %f\n\n", s3.cgpa);
	
	printf("Student (4) Name, Roll & cgpa is: %s - %d - %f", s4.name, s4.roll, s4.cgpa);
	return 0;
}

