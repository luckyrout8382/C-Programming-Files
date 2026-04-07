#include <stdio.h>
int main(){
	int sz, i, temp, count = 1;
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
	
	while (count < sz){ //Bubble Sort algorithm
		for(i = 0; i<sz-count;i++){ //Compare Current Element with Next Element
			if (arr[i] > arr[i+1]){ //If Current Element is Greater than Next Element then Swap
				temp = arr[i];
				arr[i] = arr[i+1]; //Swaping
				arr[i+1] = temp;
			}
		}
		count++;
	}
	
	printf("Your Sorted Array is: ");
	for(i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	} //Print Sorted Array Elements
	return 0;
}
