//Compare 1st N Character is Same or Not...
#include <stdio.h> 
#include <string.h> 
 
int main() { 
    char str1[30], str2[30];
    printf("Enter 1st Character:");
    scanf("%s", str1);
    
    printf("Enter 2nd Character: ");
    scanf("%s", str2);
    
    int n;
    printf("\nEnter n Character to Chek: ");
    scanf("%d", &n);
    
    int result = strncmp(str1, str2, n); 
    if (result == 0) 
        printf("\nFirst %d characters is same.\n", n); 
    else 
        printf("\nFirst %d characters is different.\n", n); 
 
    return 0; 
}
