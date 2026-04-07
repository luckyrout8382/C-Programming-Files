//Age Formula in Ternary..
# include <stdio.h>
int main(){
	int age =0;
	printf("Enter Your Age--->");
	scanf("%d", &age);
	
	age >= 18 ? printf("Adult") : printf("Child");
	
	return 0;
}
