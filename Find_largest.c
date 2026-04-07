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
	    
    int large = arr[0]; //Assuming First Element is large
    int pos = 0; //Position of largest Element
    
    for(i =0; i < sz; i++){ //Find large Element
        if (arr[i] > large){ 
            large = arr[i]; //Update large Element
            pos= i; //Update Position
        }
    }
    printf("Large Element: %d\n\n", large); //Output large Element
    printf("Position of Large Element: arr[%d]\n\n", pos);//Output Position of large Element
    
    return 0;
}
