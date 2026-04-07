#include <stdio.h>

int BinarySearch (int arr[], int sz, int target){
        int s = 0; //Initial Starting Index
        int e = sz - 1; //Initial Ending Index
        
        while(s <= e){ 
            int mid = (s + e) / 2; //Finding Mid Index
            if (arr[mid] == target){ //Compare Mid Value with Target
                return mid;
            } else if (arr[mid]> target){ //If Mid Value is Greater than Target
                e = mid-1;
            } else { //If Mid Value is Less than Target
                s = mid + 1;
            }
        }
        return -1; //If Target Not Found
    printf("No Value:(");
    return -1; //Not Found
}

int main(){
	int sz, i, target;
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
	printf("If your target is matched then return target index value neither return a negetive value.!\n");
    printf("Enter Your Target to Search: ");
    scanf("%d", &target);
    printf("\n");
    printf("Your Target is: %d", target); //Input Target Value
    printf("\n");
    
    int result = BinarySearch(arr,sz,target);
    if (result != -1){
        printf("Target Found at Index: %d", result);
    } else {
        printf("Target Not Found!");
    } //Output Result
	return 0;
}
