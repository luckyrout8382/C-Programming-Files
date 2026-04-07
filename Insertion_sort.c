#include <stdio.h>
int main(){
	int sz, i;
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
	
	for (i = 1; i < sz; i++){ //Insertion Sort Algorithm
        int key = arr[i]; //Current Element
        int j = i - 1; //Previous Element

       while (j >= 0 && arr[j] > key){ //Compare Current Element with Previous Elements
           arr[j + 1] = arr[j]; //Shift Previous Element to the Right
           j--; 
        }
        arr[j + 1] = key; //Insert Current Element at its Correct Position
    }
    
    printf("Sorted Array[]: ");
    for(i = 0;i < sz;i++){
        printf("%d ", arr[i]);
    } //Print Sorted Array Elements
    printf("\n");
	
	return 0;
}
