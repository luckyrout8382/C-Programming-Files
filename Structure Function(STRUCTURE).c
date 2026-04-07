//Structure function
#include <stdio.h>
struct student{
	char name[100];
	int roll;
	float cgpa;
};
// Function proto type..
void Printinfo(struct student s1);
void Printinfo(struct student s1){
	printf("Student Information.\n");
	printf("Student Roll no: %d\n",s1.roll);
	printf("Student Name: %s\n", s1.name);
	printf("Student Cgpa: %f\n", s1.cgpa);
}

int main(){
	struct student s1={"Jagannath", 2026, 9.9};
	Printinfo(s1);
	return 0;
}
