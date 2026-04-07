//Enter citizens data
#include <stdio.h>
	typedef struct information{
		char village_name[30];
		char block_name[30];
		char city[30];
		char state[30];
		char name[30];
		char district[30];
	}info;
int main(){
	int n;
	printf("How many citizens do you want to enter data for? -> ");
	scanf("%d", &n);
	info c[n];
	
	int i, count=0;
	for(i=1; i<=n; i++){
		printf("\nEnter information for Citizen %d\n", i);printf("*******************************\n");
		printf("Enter Your Name: ");scanf(" %[^\n]s", c[i].name);
		printf("Enter Your Village Name: ");scanf("%s", c[i].village_name);
		printf("Enter Your Block Name: ");scanf("%s", c[i].block_name);
		printf("Enter Your City Name: ");scanf("%s", c[i].city);
		printf("Enter Your District Name: ");scanf("%s", c[i].district);
		printf("Enter Your State Name: ");scanf("%s", c[i].state);printf("\n");
		count++;
	}
	printf("You enterd %d Citizens information data.", count);
	return 0;
}
