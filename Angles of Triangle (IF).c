//angels of triangle..
# include <stdio.h>
int main (){
	int a, b, c;
	printf("1st angle degree-->");
	scanf("%d",&a);
	printf("2nd angle degree-->");
	scanf("%d",&b);
	printf("3rd angle degree-->");
	scanf("%d",&c);
	if(a+b+c==180){
		printf("It is a valid Triangle");
	}
	else{
		printf("It is not a valid Triangle");
	}
	return 0;
}
