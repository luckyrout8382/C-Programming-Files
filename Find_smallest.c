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
	    
    int smallest = arr[0]; //Assuming First Element is Smallest
    int pos = 0; //Position of Smallest Element
    
    for(i =0; i < sz; i++){ //Find Smallest Element
        if (arr[i] < smallest){ 
            smallest = arr[i]; //Update Smallest Element
            pos= i; //Update Position
        }
    }
    printf("Smallest Element: %d\n\n", smallest); //Output Smallest Element
    printf("Position of Smallest Element: arr[%d]\n\n", pos);//Output Position of Smallest Element
    
    return 0;
}
