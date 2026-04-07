#include <stdio.h>

int getmax(int arr[], int sz); // 1st Function
void countsort(int arr[], int sz, int exp); // 2nd Function
void radixsort(int arr[], int sz); // 3rd Function

int getmax(int arr[], int sz){
    int mx = arr[0];
    {int i;
		for(i = 1; i < sz; i++){
        	if(arr[i] > mx){
            	mx = arr[i];
        	}
    	}
	} // this function is used to get the maximum element from the array to know the number of digits in the largest number
    return mx;
}
void countsort(int arr[], int sz, int exp){
    int output [sz];
    int i;
    int count [10] = {0}; //this is used to store the count of occurrences of digits in the array
    for (i = 0; i < sz; i++){
        count [arr[i] / exp % 10] ++; // this is used to count the occurrences of digits in the array
    }
    for (i = 1; i < 10; i++){
        count [i] += count [i - 1]; // this is used to store the cumulative count of digits in the array
    }
    for (i = sz - 1; i >= 0; i--){
        int digit = (arr[i] / exp) % 10; // this is used to get the digit at the current exponent position
        output [count[digit] - 1] = arr[i]; // this is used to store the sorted output in the output array
        count [digit] --; // this is used to decrease the count of the digit in the count array
    }
    for (i = 0; i < sz; i++){
        arr[i] = output[i]; // this is used to copy the sorted output back to the original array
    }
}
void radixsort(int arr[], int sz){
    int exp;
	int m = getmax(arr, sz); // this is used to get the maximum element from the array to know the number of digits in the largest number
    for ( exp = 1; m/exp > 0; exp *= 10){ // this is used to loop through the digits of the numbers in the array
        countsort(arr, sz, exp); // this is used to sort the array based on the current exponent position
    }
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
    
    radixsort(arr, sz);

    printf("Sorted Array[]: ");
    
    for (i = 0 ; i < sz ; i++){ // Print Sorted Array Elements
        printf("%d ", arr[i]);
    }
    return 0;
}
