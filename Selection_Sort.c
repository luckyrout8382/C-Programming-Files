#include <stdio.h>
int main(){
	int sz, i,j ,temp, count = 1;
	printf("Enter size: ");
	scanf("%d", &sz); //Input Array
	
	int arr[sz];
	for(i = 0; i < sz; i++){
		printf("Enter %d Element: ", i + 1);
		scanf("%d", &arr[i]);
	} //Input Array Elements
	
	printf("\n");
	printf("Your Array is: ");
	for (i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	} //Print Array
	printf("\n");
	
	for (i = 0; i < sz-1; i++){ //Selection Sort Algorithm
        for (j = i+1; j < sz; j++){ //Compare Current Element with Remaining Elements
            if (arr[j] < arr[i]){ //If Current Element is Greater than Compared Element then Swap
                temp = arr[j]; 
                arr[j] = arr[i]; //Swapping
                arr[i] = temp; 
            }
        }
    }
	
	printf("Your Sorted Array is: ");
	for(i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
