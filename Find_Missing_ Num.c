#include <stdio.h>
int main () {
	int arr[] = {1, 2, 4, 5};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int n = sz + 1;
	int sum = 0;
	int total = n * (n + 1) / 2;
	int i = 0;
	
	for (i = 0; i < sz; i++){
		sum = sum + arr[i];
	}
	
	int missingNum = total - sum;
	printf("Your Missing Num is: %d", missingNum);
	return 0;
}
