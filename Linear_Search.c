#include <stdio.h>

int linearSearch (int arr[], int sz, int target); //Function Declaration
int linearSearch (int arr[], int sz, int target){ //Function Definition
	int i;
    for (i = 0; i < sz; i++){
        if (arr[i] == target){
            printf("Yes your value %d is Right:) \n Which Index is: %d", arr[i], i); //Found
            return i;
        }
    }
    printf("No Value:(");
    return -1; //Not Found
}
int main() {
    int sz, i, target;
    printf("Enter Size of Arr[]: ");
    scanf("%d", &sz); //Size of Array
    printf("\n");

    int arr[sz];
    for(i = 0; i < sz; i++){
            printf("Enter element %d: ", i+1);
            scanf("%d", &arr[i]); //Input Array Elements
    }
    printf("\n");
    
    printf("Your Array[]: ");
    for(i = 0;i < sz;i++){
        printf("%d ", arr[i]); //Print Array Elements
    }
    printf("\n");
    printf("If your target is matched then return target index value neither return a negetive value.!\n\n");
    
    printf("Enter Your Target to Search:");
    scanf("%d", &target);
    printf ("Your target is: %d", target); //Search Target
    printf("\n\n");
    
    linearSearch(arr,sz,target); //Function Call
    
    return 0;
}
