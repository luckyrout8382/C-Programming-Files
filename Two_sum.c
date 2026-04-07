#include <stdio.h>

int main(){
    int nums[3] = {7,2,10};
    int ans = 12;

	int i;
    for (i = 0; i < 3;i++){
        if (nums[i] + nums[i + 1] == ans){ //Check if the sum of two numbers is equal to the target
            printf("index is %d & %d\n", i, i+1);
        }
    }
    return 0;
}
