#include <stdio.h>

void quicksort (int arr[], int l, int r); // 1st Function
int partition (int arr[], int l, int r); // 2nd Function
void swap (int arr[], int i, int j); // 3rd Function

void quicksort (int arr[], int l, int r){ 
    if (l < r) {
        int p = partition(arr, l, r);
        quicksort(arr, l, p - 1);
        quicksort(arr, p + 1, r);
    } 
}
int partition (int arr[], int l, int r){
    int pivot = arr[r];
    int i = l -1;
    {int j;
    	for (j = l; j < r; j++){
        	if (arr[j] < pivot){
            	i++;
            	swap(arr, i, j);
        	}
		}
	}
	
    swap(arr, i + 1, r);
    return i + 1;
}
void swap (int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int main(){
    int sz, i;
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
    
    int l = 0, r = sz - 1;
    quicksort(arr,l,r);

    printf("Sorted Array[]: ");
    
    for (i = 0 ; i < sz ; i++){ // Print Sorted Array Elements
        printf("%d ", arr[i]);
    }
    return 0;
}
