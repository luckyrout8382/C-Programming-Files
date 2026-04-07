#include <stdio.h>

int sum(int n) {
    if (n == 1) {
        return 1; // Base case: sum of first 1 natural number is 1
    }
    return n + sum(n - 1); // Recursive case: n + sum of first (n-1) natural numbers
}

int main () {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 1) {
        printf( "Please enter a natural number (greater than 0)\n" );
        return 1; // Exit with error code
    }

    int result = sum(n);
    printf("The sum of the 1st %d Natural number is: \n", n, result);
    for (i = 1; i <= n; i++) {
    	printf("%d = %d\n", i, sum(i));
    }

    return 0; // Exit with success code
}
