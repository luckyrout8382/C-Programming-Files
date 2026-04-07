#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1); // Recursive case  
}

int main() {
    int n, i = 0;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, factorial(n));
    for (i = 0; i <= n; i++) {
    	printf(" => %d ! = %d\n", i, factorial(i));
    }
    return 0;
}
