//Week Days..
#include <stdio.h>
int main() {
    int day;
	printf("***Week days***\n1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday\n\n***Week Ends***\n6. Saturday\n7. Sunday\n\n");
 
    printf("Enter day(1 to 7): "); scanf("%d", &day);

    switch (day) {
        case 1: case 2: case 3:  case 4: case 5: printf("It is a Weekday"); break;
        case 6 :case 7:printf("It is a Weekend"); break;

		default:printf("Invalid day number");
    }
    return 0;
}

