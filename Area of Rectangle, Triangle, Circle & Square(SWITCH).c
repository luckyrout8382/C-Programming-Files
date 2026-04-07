//Area of Rectangle, triangle, circle & square..
#include <stdio.h>
int main(){
	int n; float A, B, C, Radius, Length, Weidth, Area;
	printf("Hello sir, Please select:\n\t1: Area of Rectangle.\n\t2: Area of triangle.\n\t3: Area of Circle.\n\t4: Area of Square.\n\n");
	printf("Select--> ");
	scanf("%d", &n);
	
	switch(n){
		case 1:printf("\nTarget Rectangle.\n\nEnter length: "); scanf("%f", &Length); printf("Enter Weidth: "); scanf("%f", &Weidth);
				Area = Length * Weidth;
				printf("\nArea of Rectangle Formula = Length * Weidth ==> %.2f * %.2f = %.2f",Length, Weidth, Area); break;
				
		case 2:printf("\nTarget Triangle.\n\nEnter 1st Angle: "); scanf("%f", &A); printf("Enter 2nd Angle: "); scanf("%f", &B); printf("Enter 3rd Angle: "); scanf("%f", &C);
				Area = A + B + C;
				switch(Area>=180){
					case 1:printf("\nIt is not a valid Triangle.");break;
					default:printf("\nIt is a valid Triangle.");
				}
				printf("\n\nArea of Triangle Formula = A + B + C ==> %.2f + %.2f + %.2f = %.2f",A, B, C, Area); break;
				
		case 3:printf("\nTarget Circle.\n\nEnter Radiuas: "); scanf("%f", &Radius);
				Area = 3.14 * Radius * Radius;
				printf("\nArea of Circle Formula = 3.14 * Radius * Radius ==> 3.14 * %.2f * %.2f = %.2f",Radius, Radius, Area); break;
				
		case 4:printf("\ntarget Square.\n\nEnter A: "); scanf("%f", &A);
				Area = A*A;
				printf("\nArea of Square Formula = A * A ==> %.2f * %.2f = %.2f", A, A, Area); break;
				
		default: printf("\n!!Oh No***ERROR***\nPlease Enter Valid Input.");
	}
	
	
	return 0;
}
