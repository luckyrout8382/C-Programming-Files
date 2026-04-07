#include <stdio.h>

int main (){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //Elements of arry
    printf("The elements of the array are: ");
    
    int i;
    for (i = 0; i < 10; i++){
        printf("%d ", arr[i]); //travel
    } 
    return 0;
}
