//Pointer to structure
#include <stdio.h>
#include <string.h>
struct student{
	char name[100];
	int roll;
	float cgpa;
};
int main (){
	struct student s1;
	s1 = (struct student){ "Laxman", 4653, 9.2};
	printf("Student Name is: %s\n", s1.name);
	printf("Student Roll no: %d\n", s1.roll);
	printf("Student Mark is: %f\n\n", s1.cgpa);
	
	struct student *ptr = &s1;
	printf("Student Roll no: %d\n", (*ptr).roll); 
	printf("Student Roll no: %d\n", ptr->roll);
	
	return 0;
}
