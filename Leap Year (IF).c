//Check Leap(ADHIBARSH) year or not..
# include <Stdio.h>
int main(){
	int n,i;
	printf("Enter the Year--->");
	scanf("%d", &n);
	if(n%4==0){
		if(n/100!=0){
			printf("It is a Leap Year(ADHIBARSH..)");
		}
	}
	else{
		printf("It is not a Leap Year.");
	}
	return 0;
}
