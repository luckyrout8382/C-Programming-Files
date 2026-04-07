#include <stdio.h>

int main (){
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
	printf("\n\n");
	
    int insertElement = 11;
    int insertPosition = 2; // Position where the new element will be inserted (0-based index)
    
    // Shift elements to the right starting from the insert position
	for (i = sz - 1; i > insertPosition; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert the new element
    arr[insertPosition] = insertElement;
    
    // Print the updated array
    printf("Updated Array: ");
    for (i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    return 0;
} 
