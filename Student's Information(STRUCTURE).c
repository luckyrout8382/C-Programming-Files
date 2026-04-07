//Student information
#include <stdio.h>
	typedef struct studentinformation{
		int rollno;
		char name[30];
		char fathername[30];
		float marks;
		
	}studentinfo;
int main(){
	int n;
	printf("How many students do you want to enter data for? -> ");
	scanf("%d", &n);
	studentinfo student[n];
	
	int i, count=0;
	for(i=0; i<n; i++){
		printf("\nEnter information for Student %d\n", i + 1);printf("*******************************\n");
		printf("Enter Roll no: ");scanf("%d", &student[i].rollno);
		printf("Enter Student Name: ");scanf(" %[^\n]s", student[i].name);//class
		printf("Enter Father Name: ");scanf(" %[^\n]s", student[i].fathername);
		printf("Enter Mark: ");scanf("%f", &student[i].marks);
		if(student[i].marks >=50.0){
			printf("Good Student");
		} else {
			printf("Not a good Student");
		}
		printf("\n----------------------------------------\n");
		printf("\t\tStudent Name is: %s\n\t\tStudent Roll.no: %d\n\t\tStudent's Father Name: %s\n\t\tStudent Mark is: %f\n",student[i].name, student[i].rollno, student[i].fathername, student[i].marks);
		count++;
	}
	
	printf("\nYou enterd %d Students Data.", count);
	return 0;
}
