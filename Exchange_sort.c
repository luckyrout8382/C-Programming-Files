#include <stdio.h>

int main () {
    int sz, i, j, temp;
    printf ("Enter Size of Arr[]: ");
    scanf ("%d", &sz);
    printf("\n"); //Input Array Size

    int arr[sz];
    for(i = 0; i < sz; i++){
            printf("Enter %d Element: ", i + 1);
            scanf ("%d", &arr[i]);
    } //Input Array Elements
    printf ("\n");
    
    printf("Your Array[]: ");
    for(i = 0;i < sz;i++){
        printf("%d ", arr[i]);
    } //Print Array Elements
    printf("\n\n");

    // int arr[] = {23, 27, 25, 28, 29, 22, 21, 24, 26};
    // int sz = sizeof(arr) / sizeof(arr[0]);
    
   for (i = 0; i < sz - 1; i++){ //Compare Current Element with Next Elements
        for (j = i + 1;  sz > j; j++){ //If Current Element is Greater than Next Element then Swap
            if (arr[i] > arr[j]){ //Swapping
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted Array[]: ");
    
    for (i = 0 ; i < sz ; i++){ // Print Sorted Array Elements
        printf("%d ", arr[i]);
    }
    return 0;
}
