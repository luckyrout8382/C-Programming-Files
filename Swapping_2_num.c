#include <stdio.h>
int main (){
    int n1, n2, temp;
    printf("Enter 1st num: ");
    scanf("%d", &n1);
    printf("Enter 2nd num: ");
    scanf("%d", &n2);
    printf("\n");

    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("Your Swaping Values are: %d %d.", n1, n2);
    return 0;
}
